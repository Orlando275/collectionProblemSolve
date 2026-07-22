#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int k, n, m;
  cin >> k >> n >> m;
  vector<int> vn(n, 0);
  vector<int> vm(m, 0);
  vector<int> vt;
  for (int i{}; i < n; i++) {
    cin >> vn[i];
  }
  for (int i{}; i < m; i++) {
    cin >> vm[i];
  }
  int t = k, i = 0, j = 0;
  while (i < n) {
    if ((j == m && vn[i] > t) || vm[j] > t && vn[i] > t) {
      cout << -1 << '\n';
      return;
    }
    if (vn[i] <= t) {
      if (vn[i] == 0)
        t++;
      vt.push_back(vn[i]);
      i++;
    } else {
      while (j < m) {
        if (vm[j] <= t) {
          if (vm[j] == 0)
            t++;
          vt.push_back(vm[j]);
          j++;
        } else {
          break;
        }
      }
    }
  }
  while (j < m) {
    if (vm[j] <= t) {
      if (vm[j] == 0)
        t++;
      vt.push_back(vm[j]);
      j++;
    } else {
      cout << -1 << '\n';
      return;
    }
  }
  for (int i{}; i < vt.size(); i++) {
    cout << vt[i] << " ";
  }
  cout << '\n';
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}