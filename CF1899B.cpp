#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n;
  cin >> n;
  vector<ll> v(n);
  map<ll, ll> m;
  for (auto &z : v)
    cin >> z;
  ll cn = 0, res = 0;
  for (int i{}; i < n; i++) {
    if (v[i] == 1 || v[i] == 2) {
      res += cn;
      cn++;
    } else {
      res += m[v[i]]++;
    }
  }
  cout << res << '\n';
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}