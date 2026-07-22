#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<ll> v(n + 5);
  vector<ll> vm((m * 3) + 5);
  vector<ll> nm((m * 3) + 5);
  vector<ll> v2(n + 5, 0);
  for (int i{}; i < n; i++) {
    cin >> v[i];
  }
  for (int i{}; i < m * 3; i += 3) {
    cin >> vm[i] >> vm[i + 1] >> vm[i + 2];
  }
  ll l, r;
  for (int i{}; i < k; i++) {
    cin >> l >> r;
    nm[l - 1]++;
    nm[r]--;
  }
  for (int i = 1; i < m; i++) {
    nm[i] += nm[i - 1];
  }
  int j = 0;
  for (int i{}; i < m * 3; i += 3) {
    v2[vm[i] - 1] += vm[i + 2] * nm[j];
    v2[vm[i + 1]] -= vm[i + 2] * nm[j];
    j++;
  }
  for (int i = 1; i < n; i++) {
    v2[i] += v2[i - 1];
  }
  for (int i{}; i < n; i++) {
    v[i] += v2[i];
    cout << v[i] << " ";
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}