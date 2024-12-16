#include <iostream>
using namespace std;

int main() {
  int a, b , c;
  cin >> a;
  cin >> b;
  cin >> c;
  if (((b >= a) && (a >= c)) || ((c >= a) && (a >= b))) {
    cout << a << endl;
  } else if (((a >= b) && (b >= c)) || ((c >= b) && (b >= a))) {
    cout << b << endl;
  } else {
    cout << c << endl;
  }
  return 0;
}
