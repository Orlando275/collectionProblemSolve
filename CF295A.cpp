#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m, q;
  cin >> n >> m >> q;
  vector<long long> nm(m + 5);
  vector<long long> v(n + 5);
  vector<long long> vdif(n + 5, 0);
  vector<long long> vm((m * 3) + 5);
  for (int i{}; i < n; i++) { // meter vector inicial
    cin >> v[i];
  }
  int l, r, d;
  for (int i{}; i < m * 3; i += 3) { // guardar operaciones
    cin >> vm[i] >> vm[i + 1] >> vm[i + 2];
  }
  for (int i{}; i < q; i++) { // sobrearray para ver repeticion de operaciones
    cin >> l >> r;
    nm[r]--;
    nm[l - 1]++;
  }
  for (int i = 1; i < m; i++) {
    nm[i] += nm[i - 1];
  } // ya se tiene el numero de veces que la opeacion mi se ejecuta mn veces
  int j = 0;
  for (int i{}; i < m * 3; i += 3) { // sobrearray para sumar no de veces que dj
                                     // se repite y sumarlo y restarlo
    vdif[vm[i] - 1] += (vm[i + 2] * nm[j]);
    vdif[vm[i + 1]] -= (vm[i + 2] * nm[j]);
    j++;
  }
  for (int i = 1; i < n;
       i++) { // se tiene el diff array con la suma y resta corresta de todo eso
    vdif[i] += vdif[i - 1];
  }
  for (int i = 0; i < n; i++) { // se suma al original y se muestra
    v[i] += vdif[i];
    cout << v[i] << " ";
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}