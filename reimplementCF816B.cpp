#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  int n, k, q;
  cin >> n >> k >> q;
  vector<ll> v(2e5 + 5, 0);
  int n1, n2;
  for (int i{}; i < n; i++) {
    cin >> n1 >> n2;
    v[n1]++;
    v[n2 + 1]--;
  }
  for (int i = 1; i < v.size(); i++) {
    v[i] += v[i - 1];
  }
  for (int i{}; i < v.size(); i++) {
    if (v[i] >= k) {
      v[i] = 1;
    } else {
      v[i] = 0;
    }
  }
  for (int i = 1; i < v.size(); i++) {
    v[i] += v[i - 1];
  }
  for (int i{}; i < q; i++) {
    cin >> n1 >> n2;
    cout << v[n2] - v[n1 - 1] << '\n';
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}