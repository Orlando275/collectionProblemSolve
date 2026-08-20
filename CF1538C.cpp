#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  ll n, l, r;
  cin >> n >> l >> r;
  vector<ll> v(n);
  for (auto &z : v)
    cin >> z;
  sort(v.begin(), v.end());
  ll f, ct = 0;
  for (int i{}; i < n; i++) {
    auto it = lower_bound(v.begin() + i + 1, v.end(), l - v[i]);
    if (it != v.end() && *it + v[i] <= r) {
      auto ti = upper_bound(v.begin() + i + 1, v.end(), r - v[i]);
      ct += ti - it;
    }
  }
  cout << ct << '\n';
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}