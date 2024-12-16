#include <iostream>
using namespace std;

int main() {
  int n, l, r, t;
  string s;
  bool lapalindrome;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    lapalindrome = true;
    cin >> s;
    n = s.length();
    int left[26], right[26];
    for (int j = 0; j < 26; j++) {
      left[j] = 0;
      right[j] = 0;
    }
    for (int j = 0; j < n/2; j++) {
      l = s[j] - 97;
      r = s[n - 1 - j] - 97;
      left[l] += 1;
      right[r] += 1;
    }
    for (int i = 0; i < 26; i++) {
      if (left[i] != right[i]) {
        lapalindrome = false;
        break;
      }
    }
    if (lapalindrome) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
