#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  ll n, t;
  cin >> n >> t;
  vector<ll> v(n);
  vector<ll> v2(n);
  map<ll, int> m;
  map<ll, int> mc;
  for (int i{}; i < n; i++) {
    cin >> v[i];
    m[v[i]]++;
  }
  ll c;
  for (int i{}; i < n; i++) {
    c = abs(v[i] - t);
    auto it = m.find(c);
    if (it != m.end() && v[i] != c) {
      auto it1 = mc.find(c);
      if (it1 != mc.end()) {
        if (mc[c] == 0) {

          mc[v[i]] = 1;
          v2[i] = 1;
        }
      } else {
        mc[v[i]] = 0;
        mc[c] = 1;
      }

    } else {
      mc[v[i]] = 2;
    }
  }
  for (int i{}; i < n; i++) {
    if (mc[v[i]] == 0) {
      v2[i] = 0;
    } else if (mc[v[i]] == 1) {
      v2[i] = 1;
    } else {
      if (m[v[i]] % 2 == 0) {
        v2[i] = 1;
      } else {
        v2[i] = 0;
      }
      m[v[i]]--;
    }
  }
  for (int i{}; i < n; i++) {
    cout << v2[i] << " ";
  }
  cout << '\n';
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}