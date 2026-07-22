#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &z : v)
    cin >> z;
  map<int, int> m;
  int res = INT_MAX;
  for (int i{}; i < n; i++) {
    auto it = m.find(v[i]);
    if (it != m.end()) {
      res = min(res, (i - (it->second)) + 1);
    }
    m[v[i]] = i;
  }
  (res == INT_MAX) ? cout << -1 << '\n' : cout << res << '\n';
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}