#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, k, q;
  cin >> n >> k >> q;
  int n1, n2;
  vector<long long> v(200003, 0);
  vector<long long> v2(200003, 0);

  for (int i{}; i < n; i++) {
    cin >> n1 >> n2;
    v[n1]++;
    v[n2 + 1]--;
  }

  for (int i = 1; i < v.size(); i++) {
    v[i] += v[i - 1];
  }
  if (v[0] >= k)
    v2[0]++;
  for (int i = 1; i < v.size(); i++) {
    if (v[i] >= k)
      v2[i]++;
    v2[i] += v2[i - 1];
  }
  long long res;
  for (int i{}; i < q; i++) {
    cin >> n1 >> n2;
    res = v2[n2] - v2[n1 - 1];
    cout << res << "\n";
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}