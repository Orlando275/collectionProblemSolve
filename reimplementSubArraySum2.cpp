#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, t;
  cin >> n >> t;
  vector<long long> v(n + 1, 0);
  map<long long, long long> m;
  m[0]++;
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    v[i] += v[i - 1];
  }
  long long c, res = 0;
  for (int i = 1; i <= n; i++) {
    c = v[i] - t;
    auto it = m.find(c);
    if (it != m.end()) {
      res += it->second;
    }
    m[v[i]]++;
  }
  cout << res;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}