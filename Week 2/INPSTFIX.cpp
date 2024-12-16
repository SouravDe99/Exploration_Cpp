#include <iostream>
using namespace std;

int main() {
  int n, l, t;
  string s, r;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    cin >> s;
    char b[n];
    for (int j = 0; j < n; j++) {
      b[j] = ' ';
    }
    l = 0;
    r = "";
    for (int j = 0; j < n; j++) {
      if ((s[j] >= 'A') && (s[j] <= 'Z')) {
        r += s[j];
      }
      if (s[j] == '(') {
        b[l] = s[j];
        l++;
      }
      if (s[j] == ')') {
        while ((l > 0) && (b[l - 1] != '(')) {
          r += b[l - 1];
          b[l - 1] = ' ';
          l--;
        }
        b[l - 1] = ' ';
        l--;
      }
      if (s[j] == '^') {
        while ((l > 0) && (b[l - 1] == '^')) {
          r += b[l - 1];
          b[l - 1] = ' ';
          l--;
        }
        b[l] = s[j];
        l++;
      }
      if ((s[j] == '*') || (s[j] == '/')) {
        while ((l > 0) && ((b[l - 1] == '^') || (b[l - 1] == '*') || (b[l - 1] == '/'))) {
          r += b[l - 1];
          b[l - 1] = ' ';
          l--;
        }
        b[l] = s[j];
        l++;
      }
      if ((s[j] == '+') || (s[j] == '-')) {
        while ((l > 0) && ((b[l - 1] == '^') || (b[l - 1] == '*') || (b[l - 1] == '/') || (b[l - 1] == '+') || (b[l - 1] == '-'))) {
          r += b[l - 1];
          b[l - 1] = ' ';
          l--;
        }
        b[l] = s[j];
        l++;
      }
    }
    while (l > 0) {
      r += b[l - 1];
      b[l - 1] = ' ';
      l--;
    }
    cout << r << endl;
  }
  return 0;
}
