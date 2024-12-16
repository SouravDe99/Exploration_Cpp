#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, x, y, index, min;
  cin >> n;
  cin >> x;
  cin >> y;
  int s[n][2];
  int e[n][2];
  int v[x];
  int w[y];
  for (int i = 0; i < n; i++) {
    cin >> s[i][0];
    cin >> e[i][0];
    s[i][1] = -1000000;
    e[i][1] = 1000000;
  }
  for (int i = 0; i < x; i++) {
    cin >> v[i];
  }
  for (int i = 0; i < y; i++) {
    cin >> w[i];
  }
  sort(v, v + x);
  sort(w, w + y);
  for (int i = 0; i < n; i++) {
    index = upper_bound(v, v + x, s[i][0]) - v - 1;
    if (index > -1) {
      s[i][1] = v[index];
    }
    index = lower_bound(w, w + y, e[i][0]) - w;
    if (index < y) {
      e[i][1] = w[index];
    }
  }
  min = w[y - 1] - v[0] + 1;
  for (int i = 0; i < n; i++) {
    if (min > e[i][1] - s[i][1] + 1) {
      min = e[i][1] - s[i][1] + 1;
    }
  }
  cout << min << endl;
  return 0;
}
