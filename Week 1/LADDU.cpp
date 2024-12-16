#include <iostream>
using namespace std;

int main() {
  int n, r, s, l, t;
  string act, origin;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cin >> n;
    cin >> origin;
    l = 0;
    for (int j = 0; j < n; j++) {
      cin >> act;
      if (act == "CONTEST_WON") {
        cin >> r;
        if (r < 20) {
          l += 300 + 20 - r;
        } else {
          l += 300;
        }
      }
      if (act == "TOP_CONTRIBUTOR") {
        l += 300;
      }
      if (act == "BUG_FOUND") {
        cin >> s;
        l += s;
      }
      if (act == "CONTEST_HOSTED") {
        l += 50;
      }
    }
    if (origin == "INDIAN") {
      cout << l / 200 << endl;
    }
    if (origin == "NON_INDIAN") {
      cout << l / 400 << endl;
    }
  }
  return 0;
}
