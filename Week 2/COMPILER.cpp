#include <iostream>
using namespace std;

int main() {
  int n, open, close, x, t;
  string s;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cin >> s;
    open = 0;
    close = 0;
    x = 0;
    n = 0;
    for (int j = 0; j < s.length(); j++) {
      if (s[j] == '<') {
        open++;
      }
      if (s[j] == '>') {
        close++;
      }
      x++;
      if (open == close) {
        n = x;
      }
      if (open < close) {
        break;
      }
    }
    cout << n << endl;
  }
  return 0;
}
