#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int A, B, H;
  cin >> A >> B >> H;
  cout << H / 2 * (A + B);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}