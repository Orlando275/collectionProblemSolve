#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n, q;
  cin >> n >> q;
  vector<int> v(n);
  vector<int> v3(n + 5, 0);
  map<int, int> m;
  map<int, int> m2;
  for (auto &z : v)
    cin >> z;

  for (int i = n; i >= 1; i--) {
    auto it = m2.find(v[i - 1]);
    if (it == m2.end()) {
      m2[v[i - 1]]++;
      v3[i] = 1;
    } else {
      v3[i] = 0;
    }
  }
  for (int i = 1; i <= n; i++) {
    v3[i] += v3[i - 1];
  }
  ll res, l;
  for (int i{}; i < q; i++) {
    cin >> l;
    res = v3[n] - v3[l - 1];
    cout << res << '\n';
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}