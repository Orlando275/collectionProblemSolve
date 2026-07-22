#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n;
  cin >> n;
  map<int, int> m;
  int n1;
  ll re = 0;
  for (int i{}; i < n; i++) {
    cin >> n1;
    n1 -= i;
    re += m[n1]++;
  }
  cout << re << '\n';
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}