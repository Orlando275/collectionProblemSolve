#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &z : v)
    cin >> z;
  ll r = 0;

  for (int i{}; i < n; i++) {
    r += v[i];
  }
  cout << r / n;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}