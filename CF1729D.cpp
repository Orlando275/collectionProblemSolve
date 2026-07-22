#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n;
  cin >> n;
  vector<ll> v(n);
  vector<ll> v1(n);
  vector<ll> vd(n);
  for (auto &z : v)
    cin >> z;
  for (auto &z : v1)
    cin >> z;
  for (int i{}; i < n; i++)
    vd[i] = v1[i] - v[i];
  sort(vd.begin(), vd.end());
  int j = n - 1, res = 0;
  for (int i{}; i < n && i < j; i++) {
    if (vd[i] + vd[j] >= 0) {
      res++;
      j--;
    }
  }
  cout << res << '\n';
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}