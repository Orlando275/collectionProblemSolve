#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> v(n, 0);

  map<long long, int> m;
  int x, l = 0;
  long long res = 0;
  for (int i{}; i < n; i++) {
    cin >> x;
    auto it = m.find(x);
    if (it == m.end()) {

      res += i - l + 1;
    } else {

      l = max(it->second + 1, l);

      res += i - l + 1;
    }
    m[x] = i;
  }
  cout << res << "\n";
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
