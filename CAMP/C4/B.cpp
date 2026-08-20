#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &z : v)
    cin >> z;
  for (int k = 2; k <= n; k++) {

    if (n % k != 0)
      continue;

    int esperado = n / k;
    vector<int> cnt(k, 0);
    for (int i = 0; i < n; i++) {
      int r = v[i] % k;
      cnt[r]++;
    }

    bool sirve = true;
    for (int r = 0; r < k; r++) {
      if (cnt[r] != esperado) {
        sirve = false;
        break;
      }
    }

    if (sirve) {
      cout << k << "\n";
      return;
    }
  }
  cout << -1;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}