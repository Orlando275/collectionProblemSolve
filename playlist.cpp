#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, x, r = 0, l = 0;
  cin >> n;
  map<int, int> m;
  for (int i{}; i < n; i++) {
    cin >> x;
    auto it = m.find(x);
    if (it != m.end()) {
      l = max(l, it->second +
                     1); // important not to come back before the previous 'l'
    }
    r = max(i - l + 1, r);
    m[x] = i;
  }
  cout << r;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}