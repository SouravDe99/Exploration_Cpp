#include <iostream>
using namespace std;

int main() {
  int n, t;
  long long a, min, sum;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cin >> n;
    cin >> a;
    min = a;
    sum = min;
    for (int j = 1; j < n; j++) {
      cin >> a;
      if (a < min) {
        min = a;
      }
      sum += min;
    }
    cout << sum << endl;
  }
  return 0;
}
