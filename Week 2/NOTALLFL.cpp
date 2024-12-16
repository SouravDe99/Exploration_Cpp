#include <iostream>
using namespace std;

int main() {
  int n, k, x, y, c, max, t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    cin >> k;
    int a[n];
    int b[k];
    for (int j = 0; j < n; j++) {
      cin >> a[j];
    }
    for (int j = 0; j < k; j++) {
      b[j] = 0;
    }
    c = 0;
    for (int j = 0; j < k - 1; j++) {
      if (b[a[j] - 1] == 0) {
      c++;
      }
      b[a[j] - 1] += 1;
    }
    x = 0;
    y = k - 1;
    max = 0;
    while (y < n) {
      if (c < k) {
        if (max < y - x) {
          max = y - x;
        }
        if (b[a[y] - 1] == 0) {
        c++;
        }
        b[a[y] - 1] += 1;
        y++;
      } else {
        b[a[x] - 1] -= 1;
        if (b[a[x] - 1] == 0) {
          c--;
        }
        x++;
      }
    }
    if ((c < k) && (max < y - x)) {
      max = y - x;
    }
    cout << max << endl;
  }
  return 0;
}
