#include <iostream>
using namespace std;

int main() {
  int n, s, p, v, profit, maxProfit, t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cin >> n;
    maxProfit = 0;
    for (int j = 1; j <= n; j++) {
      cin >> s;
      cin >> p;
      cin >> v;
      profit = (p / (s + 1)) * v;
      if (maxProfit < profit) {
        maxProfit = profit;
      }
    }
    cout << maxProfit << endl;
  }
  return 0;
}
