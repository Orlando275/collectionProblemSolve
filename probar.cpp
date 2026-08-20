#include <bits/stdc++.h>
using namespace std;
int main() {
  int mask = 0;
  for (char c : string("ab")) {
    mask ^= 1 << (c - 'a');
    cout << c << " -> " << bitset<26>(mask) << "\n";
  }
}
