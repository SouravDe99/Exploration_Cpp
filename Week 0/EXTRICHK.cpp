#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;
  if ((a + b > c) && (b + c > a) && (c + a > b)) {
    if ((a == b) && (b == c)) {
      cout << 1 << endl;
    } else if ((a != b) && (b != c) && (c != a)) {
      cout << 3 << endl;
    } else {
      cout << 2 << endl;
    }
  } else {
    cout << -1 << endl;
  }
  return 0;
}
