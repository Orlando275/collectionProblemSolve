#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<long long> v(n);
  for (int i{}; i < n; i++)
    cin >> v[i];
  long long res = v[0], x = v[0];
  for (int i = 1; i < n; i++) {
    res += v[i];
    if (res < v[i])
      res = v[i];
    x = max(x, res);
  }
  cout << x;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}