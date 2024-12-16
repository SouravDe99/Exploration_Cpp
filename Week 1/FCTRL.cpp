#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int t;
  long long n, d, count;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cin >> n;
    count = 0;
    for (int j = 1; true; j++) {
      d = (long long)pow(5, j);
      if (n < d) {
        break;
      }
      count += n / d;
    }
    cout << count << endl;
  }
  return 0;
}
