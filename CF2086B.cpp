#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  ll n, k;
  ll x;
  cin >> n >> k >> x;
  vector<ll> v(n + 5, 0);
  vector<ll> v2(n + 5, 0);
  ll st = 0;
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    st += v[i];
  }
  ll s = 0;
  for (int i = n; i >= 1; i--) {
    s += v[i + 1];
    v2[i] += (k * st) - (s);
  }

  if (v2[n] < x) {
    cout << 0 << "\n";
    return;
  } else if (v2[n] == x) {
    cout << 1 << "\n";
    return;
  }
  ll b = 1, res = st, i = 0, ct = 0;
  while (x > res) {
    b++;
    res = st * b;
  }
  b--;
  s = 0;
  for (int i = n; i >= 1; i--) {
    s += v[i];
    res = s + (b * st);
    ct++;
    if (res >= x) {
      break;
    }
  }
  cout << ((n * k) - ((b * n) + ct) + 1) << "\n";
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}