#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  string S;
  cin >> S;
  int N = S.size(), res = 0;
  for (int i = 1; i < N; ++i) {
    res += S[i] != S[i - 1];
  }
  cout << res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}