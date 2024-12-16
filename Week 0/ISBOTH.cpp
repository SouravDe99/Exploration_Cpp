#include <iostream>
using namespace std;

int main() {
  int n, c;
  cin >> n;
  c = 0;
  if (n % 5 == 0) {
    c++;
  }
  if (n % 11 == 0) {
    c++;
  }
  if (c == 0) {
    cout << "NONE" << endl;
  }
  if (c == 1) {
    cout << "ONE" << endl;
  }
  if (c == 2) {
    cout << "BOTH" << endl;
  }
  return 0;
}
