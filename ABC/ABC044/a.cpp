#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll N, K, X, Y;
  cin >> N >> K >> X >> Y;
  ll res = 0;
  if (N <= K) {
    res = X * N;
  } else {
    res = K * X + (N - K) * Y;
  }
  cout << res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}