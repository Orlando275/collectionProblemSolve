#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n;
  cin >> n;
  vector<ll> v(n + 5);
  for (int i{}; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 1; i < n; i++) {
    v[i] += v[i - 1];
  }
  if ((v[n - 1] % 3) != 0 || n <= 2) {
    cout << 0;
    return;
  }
  ll res = 0, cv = 0;
  for (int i{}; i < n - 1; i++) {

    if ((2 * v[n - 1]) / 3 == v[i]) {
      res += cv;
    }
    if (v[n - 1] / 3 == v[i])
      cv++;
  }
  cout << res;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}