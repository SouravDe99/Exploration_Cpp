#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, p, max;
  cin >> n;
  pair<int, int> a[n];
  pair<int, int> left[n];
  pair<int, int> right[n];
  int l[n];
  int r[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i].first;
    cin >> a[i].second;
  }
  sort(a, a + n);
  max = a[0].first * 500;
  for (int i = 0; i < n - 1; i++) {
    if (max < (a[i + 1].first - a[i].first) * 500) {
      max = (a[i + 1].first - a[i].first) * 500;
    }
  }
  if (max < (100000 - a[n - 1].first) * 500) {
    max = (100000 - a[n - 1].first) * 500;
  }
  p = 0;
  for (int i = 0; i < n; i++) {
    while ((p > 0) && ((left[p - 1].second >= a[i].second))) {
      p--;
    }
    if (p > 0) {
      l[i] = left[p - 1].first;
    } else {
      l[i] = 0;
    }
    left[p] = a[i];
    p++;
  }
  p = 0;
  for (int i = n - 1; i >= 0; i--) {
    while ((p > 0) && ((right[p - 1].second >= a[i].second))) {
      p--;
    }
    if (p > 0) {
      r[i] = right[p - 1].first;
    } else {
      r[i] = 100000;
    }
    right[p] = a[i];
    p++;
  }
  for (int i = 0; i < n; i++) {
    if (max < (r[i] - l[i]) * a[i].second) {
      max = (r[i] - l[i]) * a[i].second;
    }
  }
  cout << max << endl;
  return 0;
}
