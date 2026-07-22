#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int ca = 0;
  int cb = 0;
  int mc = 0, l = 0, res = 0;
  for (int i{}; i < n; i++) {
    if (s[i] == 'a')
      ca++;
    if (s[i] == 'b')
      cb++;
    mc = min(ca, cb);
    while (mc > k) {
      if (s[l] == 'a') {
        ca--;
      } else {
        cb--;
      }
      l++;
      mc = min(ca, cb);
    }
    res = max(res, i - l + 1);
  }
  cout << res;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}