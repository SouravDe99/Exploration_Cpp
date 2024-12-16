#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  long long revenue, tempRevenue;
  cin >> n;
  long long budget[n];
  for (int i = 0; i < n; i++) {
    cin >> budget[i];
  }
  sort(budget, budget + n);
  revenue = 0;
  for (int i = 1; i <= n; i++) {
    tempRevenue = budget[n - i] * i;
    for (int j = n - i - 1; j >= 0; j--) {
      if (budget[n - i] == budget[j]){
        tempRevenue += budget[n - i];
      } else {
        break;
      }
    }
    if (revenue < tempRevenue) {
      revenue = tempRevenue;
    }
  }
  cout << revenue << endl;
  return 0;
}
