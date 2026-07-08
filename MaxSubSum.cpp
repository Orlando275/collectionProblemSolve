#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, x;
  cin >> n;
  long long res;
  cin >> res;
  long long r = res;
  for (int i = 1; i < n; i++) {
    cin >> x;
    res = res + x;
    if (res < x) {
      res = x;
    }
    r = max(r, res);
  }
  cout << r;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}