#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll N, K;
  cin >> N >> K;
  vector<ll> D(10);
  for (int i = 0; i < K; ++i) {
    ll x;
    cin >> x;
    ++D[x];
  }
  auto ok = [&](ll X) {
    int F = 1;
    while (X) {
      F &= (1 - D[X % 10]);
      X /= 10;
    }
    return F;
  };
  while (!ok(N)) {
    ++N;
  }
  cout << N << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}