#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n;
  ll k;
  cin >> n >> k;
  vector<ll> v(n);
  vector<pair<ll, char>> vt(n + 2, {0, 0});
  for (auto &z : v)
    cin >> z;
  string s;
  cin >> s;

  for (int i = 0; i < n; i++) {
    vt[i] = {v[i], s[i]};
  }
  int l = 0, r = 0;
  char c = vt[0].second;
  ll count = 0, vec = 1;
  for (int i = 0; i < n; i++) {
    if (vt[i].second != vt[i + 1].second || i == n - 1) {

      sort(vt.begin() + l, vt.begin() + i + 1);
      r = i;
      while (vec <= k && r >= l) {
        count += vt[r].first;
        r--;
        vec++;
      }

      l = i + 1;
      vec = 1;
    }
  }
  cout << count;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}