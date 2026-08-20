#include <bits/stdc++.h>
using namespace std;
#define unshort unsigned short
struct custom_hash {
  static uint64_t splitmix64(uint64_t x) {
    x += 0x9e3779b97f4a7c15;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
    x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
    return x ^ (x >> 31);
  }
  size_t operator()(uint64_t x) const {
    static const uint64_t FIXED_RANDOM =
        chrono::steady_clock::now().time_since_epoch().count();
    return splitmix64(x + FIXED_RANDOM);
  }
};
void solve() {
  unordered_set<unshort, custom_hash> m;

  short n;
  cin >> n;
  vector<short> v(n);
  short sum = 0;
  for (auto &z : v)
    cin >> z;
  for (short i{}; i < n - 1; i++) {
    sum = v[i];
    for (short j = i + 1; j < n && sum < n; j++) {
      sum += v[j];
      m.insert(sum);
    }
  }
  short ct = 0;
  for (short i = 0; i < n; i++) {
    auto it = m.find(v[i]);
    if (it != m.end())
      ct++;
  }
  cout << ct << '\n';
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  short t;
  cin >> t;
  while (t--)
    solve();
}