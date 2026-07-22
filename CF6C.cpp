#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, i = 1, ir = 0;
  cin >> n;
  int j = n, jr = 0;
  vector<long long> v(n + 1, 0);
  vector<long long> v2(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  v2[n] = v[n];
  for (int i = n - 1; i >= 1; i--) {
    v2[i] = v[i] + v2[i + 1];
  }
  for (int i = 1; i <= n; i++) {
    v[i] += v[i - 1];
  }
  while (i <= j) {
    if (v[i] < v2[j]) {
      ir++;
      i++;
    } else if (v[i] == v2[j]) {
      ir++;
      i++;
    } else {
      j--;
      jr++;
    }
  }
  cout << ir << "\n" << jr;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}