#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, q;
  cin >> n >> q;
  vector<vector<int>> v(n + 5, vector<int>(n + 5, 0));
  char c;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> c;
      if (c == '*') {
        v[i][j] = 1;
      } else {
        v[i][j] = 0;
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      v[i][j] += v[i - 1][j] + v[i][j - 1] - v[i - 1][j - 1];
    }
  }
  int x1, y1, x2, y2;
  for (int i{}; i < q; i++) {
    cin >> y1 >> x1 >> y2 >> x2;
    cout << v[y2][x2] - v[y2][x1 - 1] - v[y1 - 1][x2] + v[y1 - 1][x1 - 1]
         << '\n';
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
