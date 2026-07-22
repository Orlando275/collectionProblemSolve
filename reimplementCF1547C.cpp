#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int k, n, m;
  cin >> k >> n >> m;
  vector<int> v(n);
  vector<int> v2(m);
  vector<int> vt;
  for (auto &z : v)
    cin >> z;
  for (auto &z : v2)
    cin >> z;
  int j = 0, i = 0, lg = k;
  while (i < n || j < m) {
    if (i < n && v[i] <= lg) {
      if (v[i] == 0)
        lg++;
      vt.push_back(v[i]);
      i++;
    } else if (j < m && v2[j] <= lg) {
      if (v2[j] == 0)
        lg++;
      vt.push_back(v2[j]);
      j++;
    } else {
      cout << -1 << '\n';
      return;
    }
  }
  for (auto &z : vt)
    cout << z << " ";
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