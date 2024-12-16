#include <iostream>
using namespace std;

int main() {
  int n, count, t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cin >> n;
    int maxSpeed[n];
    int speed[n];
    for (int j = 0; j < n; j++) {
      cin >> maxSpeed[j];
    }
    speed[0] = maxSpeed[0];
    count = 1;
    for (int j = 1; j < n; j++) {
      if (maxSpeed[j] <= speed[j - 1]) {
        speed[j] = maxSpeed[j];
        count++;
      } else {
        speed[j] = speed[j - 1];
      }
    }
    cout << count << endl;
  }
  return 0;
}
