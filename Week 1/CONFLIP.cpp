#include <iostream>
using namespace std;

int main() {
  int n, i, q, g, t;
  cin >> t;
  for (int j = 1; j <= t; j++) {
    cin >> g;
    for (int k = 1; k <= g; k++) {
      cin >> i;
      cin >> n;
      cin >> q;
      if (n % 2 == 0) {
        cout << n / 2 << endl;
      } else {
        if (i == q) {
          cout << (n - 1) / 2 << endl;
        } else {
          cout << (n + 1) / 2 << endl;
        }
      }
    }
  }
  return 0;
}
