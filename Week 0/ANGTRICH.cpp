#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;
  if ((a + b + c == 180) && (a != 0) && (b != 0) && (c != 0) && (a != 180) && (b != 180) && (c != 180)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
