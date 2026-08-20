#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;
  set<ll> st;
  ll no1;
  for (int i = 0; i < m; i++) {
    cin >> no1;
    st.insert(no1);
  }
  ll dv = 1;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'B') {
      auto it = st.lower_bound(dv + 1);
      ll y = dv + 1;
      while (it != st.end() && *it == y) {
        it++;
        y++;
      }
      st.insert(y);
      it = st.lower_bound(y + 1);
      y = y + 1;
      while (it != st.end() && *it == y) {
        it++;
        y++;
      }
      dv = y;

    } else {
      dv++;
      st.insert(dv);
    }
  }
  cout << st.size() << '\n';
  for (ll z : st) {
    cout << z << " ";
  }
  cout << '\n';
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}
