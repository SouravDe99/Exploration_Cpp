#include <iostream>
using namespace std;

int main() {
  int n, k, a = 0;
  cin >> n;
  cin >> k;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a == k) {
      cout << 1 << endl;
      break;
    }
    a = 0;
  }
  if (a == 0) {
    cout << -1 << endl;
  }
  return 0;
}
