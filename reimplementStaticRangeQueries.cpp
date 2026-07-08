#include <bits/stdc++.h>
using namespace std;

void solve() {

  int n, q;
  cin >> n >> q;
  vector<long long> v(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    v[i] += v[i - 1];
  }

  for (int i{}; i < q; i++) {
    int q1, q2;
    cin >> q1 >> q2;
    cout << v[q2] - v[q1 - 1] << "\n";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}