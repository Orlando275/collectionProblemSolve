#include <bits/stdc++.h>
using namespace std;

void solve() {
  int v, t, l, r;
  cin >> v >> t;
  vector<long long> p(v + 1, 0);
  for (int i = 1; i <= v; i++) {
    cin >> p[i];
  }
  for (int i = 1; i <= v; i++)
    p[i] += p[i - 1];

  while (t--) {
    cin >> l >> r;
    long long re = p[r] - p[l - 1];
    cout << re << "\n";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
