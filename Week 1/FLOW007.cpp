#include <iostream>
using namespace std;

int main() {
  int n, d, r, t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cin >> n;
    r = 0;
    while (n > 0) {
      d = n % 10;
      r = r * 10 + d;
      n = n / 10;
    }
    cout << r << endl;
  }
  return 0;
}
