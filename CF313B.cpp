#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  string s;
  cin >> s;
  char c = s[0];
  vector<int> v(s.length(), 0);
  for (int i = 1; i < s.length(); i++) {
    if (c == s[i]) {
      v[i] = 1;
    }
    v[i] += v[i - 1];

    c = s[i];
  }
  int m, l, r;
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> l >> r;
    int res = v[r - 1] - v[l - 1];
    cout << res << '\n';
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}