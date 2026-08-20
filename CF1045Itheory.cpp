#include <bits/stdc++.h>
using namespace std;
#define ll long long

// hash a prueba de anti-tests para unordered_map
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

  unordered_map<int, int, Hash> cnt;
  cnt.reserve(1 << 18);
  cnt.max_load_factor(0.7);

  ll ans = 0;
  string s;
  for (int i = 0; i < n; i++) {
    cin >> s;

    int mask = 0;
    for (char c : s)
      mask ^= 1 << (c - 'a');

    // caso xor == 0: mismas paridades
    auto it = cnt.find(mask);
    if (it != cnt.end())
      ans += it->second;

    // caso xor == (1 << b): difieren en exactamente una letra
    for (int b = 0; b < 26; b++) {
      auto jt = cnt.find(mask ^ (1 << b));
      if (jt != cnt.end())
        ans += jt->second;
    }

    cnt[mask]++;
  }

  cout << ans << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
