#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  string s;
  cin >> s;
  int i = 0, j = s.length() - 1;

  set<int> se;
  while (i < j) {
    while (s[i] != '(' && i < j)
      i++;
    while (s[j] != ')' && i < j)
      j--;
    if (i < j) {
      int r = i + 1;
      se.insert(r);
      se.insert(j + 1);
    }
    i++;
    j--;
  }
  if (se.size() == 0) {
    cout << 0 << '\n';
  } else {
    cout << 1 << '\n';
    cout << se.size() << '\n';
    for (auto &m : se) {
      cout << m << " ";
    }
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}