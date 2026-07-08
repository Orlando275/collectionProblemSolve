#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n, l = 0, r = 0;
  long long in;
  long long re = 0;
  cin >> n;
  map<long long, int> s;
  int de;
  for (int i = 0; i < n; i++) {
    cin >> in;
    auto it = s.find(in);
    if (it == s.end()) {
      s[in] = i;
      re += r - l + 1;

    } else {

      de = s[in];
      s[in] = i;
      l = max(l, de + 1);

      re += r - l + 1;
    }
    r++;
  }
  cout << re;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}