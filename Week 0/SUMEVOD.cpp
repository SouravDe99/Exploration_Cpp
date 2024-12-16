#include <iostream>
using namespace std;

int main() {
  long long n, s_odd, s_even;
  cin >> n;
  s_odd = n * n;
  s_even = n * (n + 1);
  cout << s_odd << " " << s_even << endl;
  return 0;
}
