#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll N, K;
  cin >> N >> K;
  ll res = K;
  for (int _ = 0; _ < N - 1; ++_) {
    res *= (K - 1);
  }
  cout << res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}