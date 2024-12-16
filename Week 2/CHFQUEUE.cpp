#include <iostream>
using namespace std;

int main() {
  int n, k, f, l;
  long long m;
  cin >> n;
  cin >> k;
  int a[n];
  int b[n];
  int p[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  m = 1;
  l = 0;
  for (int i = n - 1; i >= 0; i--) {
    while ((l > 0) && ((b[l - 1] >= a[i]))) {
      l--;
    }
    if (l > 0) {
      f = p[l - 1] - i + 1;
    } else {
      f = 1;
    }
    b[l] = a[i];
    p[l] = i;
    l++;
    m = (m * f) % 1000000007;
  }
  cout << m << endl;
  return 0;
}
