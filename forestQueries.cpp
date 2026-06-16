#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, q;
  char v;
  cin >> n >> q;
  vector<vector<int>> dos(n + 1, vector<int>(n + 1));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> v;
      if (v == '.')
        dos[i][j] = 0;
      else
        dos[i][j] = 1;
      dos[i][j] += dos[i - 1][j] + dos[i][j - 1] - dos[i - 1][j - 1];
    }
  }
  while (q--) {
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    int re =
        dos[r2][c2] + dos[r1 - 1][c1 - 1] - dos[r2][c1 - 1] - dos[r1 - 1][c2];
    cout << re << "\n";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}