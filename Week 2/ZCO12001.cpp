#include <iostream>
using namespace std;

int main() {
  int n, a, d, dp, s, sp;
  cin >> n;
  int b[n], c[n];
  cin >> a;
  b[0] = 1;
  c[0] = 1;
  for (int i = 1; i < n; i++) {
    cin >> a;
    if (a == 1) {
      b[i] = b[i - 1] + 1;
    } else {
      b[i] = b[i - 1] - 1;
    }
    if (b[i] != 0) {
      c[i] = c[i - 1] + 1;
    } else {
      c[i] = 0;
    }
  }
  d = 1;
  dp = 1;
  s = 0;
  sp = 1;
  for (int i = 0; i < n; i++) {
    if (b[i] > d) {
      d = b[i];
      dp = i + 1;
    }
    if (c[i] + 1 > s) {
      s = c[i] + 1;
      sp = i + 2 - c[i];
    }
  }
  cout << d << " " << dp << " " << s << " " << sp << endl;
  return 0;
}
