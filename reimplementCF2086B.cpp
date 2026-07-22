#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  ll n, k, x;
  cin >> n >> k >> x;
  vector<ll> v(n);
  ll S = 0;
  for (auto &z : v) {
    cin >> z;
    S += z;
  }
  ll t = (S * k);
  if (t < x) {
    cout << 0 << '\n';
    return;
  }

  ll va = t - x;
  ll b = va / S;
  ll so = va - (b * S), c = 0, re = 0;
  for (int i{}; i < n && re <= so; i++) {
    re += v[i];
    c++;
  }
  cout << b * n + c << '\n';
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}