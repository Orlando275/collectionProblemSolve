#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  int n, m, q;
  cin >> n >> m >> q;
  vector<ll> v(n);
  vector<ll> v2(n + 5, 0);
  vector<ll> vm((m * 3) + 5);
  vector<ll> nq((m * 3) + 5);
  for (int i{}; i < n; i++) {
    cin >> v[i];
  }
  for (int i{}; i < m * 3; i += 3) {
    cin >> vm[i] >> vm[i + 1] >> vm[i + 2];
  }
  int n1, n2;
  for (int i{}; i < q; i++) {
    cin >> n1 >> n2;
    nq[n1 - 1]++;
    nq[n2]--;
  }
  for (int i = 1; i < m; i++) {
    nq[i] += nq[i - 1];
  }
  int j = 0;
  for (int i{}; i < m * 3; i += 3) {
    v2[vm[i] - 1] += (nq[j] * vm[i + 2]);
    v2[vm[i + 1]] -= (nq[j] * vm[i + 2]);
    j++;
  }
  for (int i = 1; i < n; i++) {
    v2[i] += v2[i - 1];
  }
  for (int i = 0; i < n; i++) {
    v[i] += v2[i];
    cout << v[i] << " ";
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
