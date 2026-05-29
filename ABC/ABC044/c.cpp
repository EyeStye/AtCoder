#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll N, A;
  cin >> N >> A;
  vector<ll> X(N);
  ll m = 0, M = 0;
  for (int i = 0; i < N; ++i) {
    cin >> X[i];
  }
  for (auto& x : X) {
    x -= A;
    m += x < 0 ? x : 0;
    M += x >= 0 ? x : 0;
  }
  ll off = -m;
  vector<ll> dp(M - m + 1), DP(M - m + 1);
  dp[off] = 1;   // Base case
  for (auto& x : X) {
    DP = dp;
    for (ll s = m; s <= M; ++s) {
      DP[s + off + x] += dp[s + off];
    }
    dp = DP;
  }
  cout << dp[off] - 1 << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}