#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;
  unordered_set<char> st;
  unordered_map<char, int> m;
  string s;
  cin >> s;
  for (char &c : s) {
    st.insert(c);
  }
  int k = st.size();
  int l = 0, cn = 0, res = INT_MAX;
  for (int i{}; i < n; i++) {

    auto it = m.find(s[i]);

    if (it == m.end() || it->second == 0)
      cn++;
    m[s[i]]++;

    if (k == cn) {
      res = min(res, i - l + 1);
      while (cn == k) {
        m[s[l]]--;

        if (m[s[l]] == 0) {
          l++;
          cn--;
          break;
        } else {
          l++;
          res = min(res, i - l + 1);
        }
      }
    }
  }
  cout << res;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}