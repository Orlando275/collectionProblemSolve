#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n, k;
  cin >> n >> k;
  vector<ll> v(n + 1, 0);
  vector<ll> vh(n + 1, 0);
  vector<ll> vc(n + 1, 0);
  for (int i = 1; i <= n; i++)
    cin >> v[i];
  for (int i = 1; i <= n; i++)
    cin >> vh[i];
  for (int i = 1; i <= n; i++) {
    if (vh[i - 1] % vh[i] == 0 && i != 1) {
      vc[i] = 1;
    } else {
      vc[i] = 0;
    }
    vc[i] += vc[i - 1];
  }

  for (int i = 1; i <= n; i++)
    vh[i] += vh[i - 1];
  ll cn = 0, t = 0, l = 1;
  for (int i = 1; i <= n; i++) {
    while (vc[i] - vc[l - 1] != i - (l - 1)) {
      l++;
    }
    t = max(t, i - (l - 1));
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