#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  ll n, x;
  cin >> n >> x;
  vector<ll> v(n);
  for (auto &z : v)
    cin >> z;
  map<ll, int> m;
  ll c;
  for (int i{}; i < n; i++) {
    c = x - v[i];

    auto it = m.find(c);
    if (it != m.end()) {
      cout << it->second << " " << i + 1;
      return;
    }
    m[v[i]] = i + 1;
  }
  cout << "IMPOSSIBLE";
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}