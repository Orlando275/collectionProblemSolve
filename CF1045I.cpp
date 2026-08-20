#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct Hash {
  static uint64_t splitmix64(uint64_t x) {
    x += 0x9e3779b97f4a7c15ULL;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9ULL;
    x = (x ^ (x >> 27)) * 0x94d049bb133111ebULL;
    return x ^ (x >> 31);
  }
  size_t operator()(int x) const {
    static const uint64_t FIXED =
        chrono::steady_clock::now().time_since_epoch().count();
    return splitmix64(x + FIXED);
  }
};
void solve() {
  int n;
  cin >> n;
  unordered_map<int, int, Hash> m;

  string s;
  ll an = 0;
  for (int i{}; i < n; i++) {
    cin >> s;
    int mk = 0;
    for (char &c : s)
      mk ^= 1 << (c - 'a');
    auto it = m.find(mk);
    if (it != m.end())
      an += it->second;

    for (int j = 0; j < 26; j++) {
      auto ti = m.find(mk ^ (1 << j));
      if (ti != m.end()) {
        an += ti->second;
      }
    }
    m[mk]++;
  }
  cout << an;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}