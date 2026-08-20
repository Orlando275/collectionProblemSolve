#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> ma(n);

  for (auto &z : v)
    cin >> z;
  ma[n - 1] = v[n - 1];
  for (int i = n - 2; i >= 0; i--) {
    ma[i] = max(v[i], ma[i + 1]);
  }
  vector<int> mx(n);
  ll r = 0;
  mx[0] = v[0];
  for (int i = 1; i < n; i++) {
    mx[i] = max(mx[i - 1], v[i]);
  }
  for (int i = 1; i < n; i++) {
    r += (ll)min(mx[i], ma[i]) - v[i];
  }
  cout << r << '\n';
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}