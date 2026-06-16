#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, t, x;
  cin >> n >> t;
  map<long long, int> m;
  int c;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    c = t - x;
    auto it = m.find(c);
    if (it != m.end()) {
      cout << it->second << " " << i;
      return;
    }
    m[x] = i;
  }
  cout << "IMPOSSIBLE";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}