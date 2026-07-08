#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<long long> v(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    v[i] += v[i - 1];
  }
  int l = 0, in = 1;
  long long res, r2 = LONG_LONG_MAX;
  for (int i = k; i <= n; i++) {
    res = v[i] - v[l];

    if (res < r2) {
      in = l + 1;
    }
    r2 = min(r2, res);
    l++;
  }
  cout << in;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}