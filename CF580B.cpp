#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  ll n, d;
  cin >> n >> d;
  vector<pair<ll, ll>> v(n);
  for (int i{}; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }

  sort(v.begin(), v.end());
  ll c;
  ll res = v[0].second, r = v[0].second;
  int l = 0;
  for (int i = 1; i < n; i++) {
    c = v[i].first - v[l].first;
    while (c >= d) {
      res -= v[l].second;
      l++;
      c = v[i].first - v[l].first;
    }
    res += v[i].second;
    r = max(r, res);
  }
  cout << r;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}