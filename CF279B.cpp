#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve() {
  ll n, t, res = 0;
  cin >> n >> t;
  vector<ll> v(n + 5);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  ll c, l = 1;
  for (int i = 1; i <= n; i++)
    v[i] += v[i - 1];

  // siempre -1 para no agarrar el conjunto que quiero considerar
  for (int i = 1; i <= n; i++) {
    c = v[i] - v[l - 1];
    while (c > t) {
      l++;
      c = v[i] - v[l - 1];
    }
    res = max(res, i - l + 1);
  }
  cout << res;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}