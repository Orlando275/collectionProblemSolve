#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n, k;
  cin >> n >> k;
  vector<ll> v(n + 5, 0);
  vector<ll> vh(n + 5, 0);
  vector<ll> vc(n + 5, 0);
  for (int i = 1; i <= n; i++)
    cin >> v[i];
  for (int i = 1; i <= n; i++)
    cin >> vh[i];

  for (int i = 1; i <= n; i++) {
    if (vh[i - 1] % vh[i] == 0) {
      vc[i] = 1;
    } else {
      vc[i] = 0;
    }
    vc[i] += vc[i - 1];
    v[i] += v[i - 1];
  }

  ll cn = 0, t = 0, l = 1;
  for (int i = 1; i <= n; i++) {
    while (l <= i && (v[i] - v[l - 1] > k || vc[i] - vc[l] != i - l))
      l++;
    t = max(t, (ll)i - l + 1);
  }
  cout << t << '\n';
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}