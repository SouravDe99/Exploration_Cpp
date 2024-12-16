#include <iostream>
using namespace std;

int main() {
  int i, j, n, a, b, t;
  string s;
  cin >> t;
  for (i = 1; i <= t; i++) {
    cin >> n;
    cin >> s;
    a = 0;
    b = 0;
    for (j = 1; j <= 2 * n; j++) {
      if (s[j - 1] == '1') {
        if (j % 2 == 1) {
          a++;
        } else {
          b++;
        }
      }
      if ((a > b + n - j / 2) || (b > a + n - (j + 1) / 2)) {
        cout << j << endl;
        break;
      }
    }
    if (j > 2 * n) {
      cout << 2 * n << endl;
    }
  }
  return 0;
}
