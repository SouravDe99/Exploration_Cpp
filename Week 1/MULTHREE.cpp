#include <iostream>
using namespace std;

int main() {
  int d0, d1, tempSum, t;
  long long k, sum;
   cin >> t;
  for (int i = 1; i <= t; i++) {
    cin >> k;
    cin >> d0;
    cin >> d1;
    sum = 0;
    tempSum = d0 + d1;
    sum += tempSum;
    sum += tempSum % 10;
    sum += ((  k  ) / 4) * ((2 * tempSum) % 10);
    sum += ((k - 1) / 4) * ((4 * tempSum) % 10);
    sum += ((k - 2) / 4) * ((8 * tempSum) % 10);
    sum += ((k - 3) / 4) * ((6 * tempSum) % 10);
    if (sum % 3 == 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
