#include <bits/stdc++.h>
using namespace std;
#define ll long long;

void solve() {
  int n, k;
  cin >> n >> k;
  long long c, r = 0;
  map<long long, int> m;
  vector<long long> v(n + 1, 0);
  m[0]++;
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    v[i] += v[i - 1];

    c = v[i] - k;
    auto it = m.find(c);
    if (it != m.end()) {
      r += it->second;
    }
    m[v[i]]++;
  }
  cout << r;
}

int main() { solve(); }