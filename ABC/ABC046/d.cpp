#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  string S;
  cin >> S;
  ll N = S.size();
  ll P = 0, G = 0;
  for (int i = 0; i < N; ++i) {
    P += S[i] == 'p';
    G += S[i] == 'g';
  }
  cout << (G - P) / 2 << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}