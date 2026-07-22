#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n, m;
  cin >> n;
  vector<ll> v(n + 1, 0);
  vector<ll> vm(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    vm[i] = v[i];
    v[i] += v[i - 1];
  }
  sort(vm.begin(), vm.end());
  for (int i = 1; i <= n; i++) {
    vm[i] += vm[i - 1];
  }
  cin >> m;
  int t, l, r;
  for (int i{}; i < m; i++) {
    cin >> t >> l >> r;
    if (t == 1) {
      cout << v[r] - v[l - 1] << '\n';
    } else {
      cout << vm[r] - vm[l - 1] << '\n';
    }
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}