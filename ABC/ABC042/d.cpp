#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll M = 1e9 + 7;
const ll N = 200005;
ll F[N], I[N], IF[N];

void solve() {
  ll H, W, A, B;
  cin >> H >> W >> A >> B;
  auto C = [&](ll n, ll r) {
    if (r > n) {
      return 0LL;
    }
    ll ans = F[n] * IF[r] % M;
    ans = ans * IF[n - r] % M;
    return ans;
  };
  ll res = 0;
  for (int i = 0; i < H - A; ++i) {
    res = (res + C(B + i - 1, B - 1) * C(H + W - 2 - i - B, W - 1 - B) % M) % M;
  }
  cout << res << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  F[0] = 1, I[1] = 1, IF[0] = 1;   // Base cases
  for (ll i = 1; i < N; ++i) {
    F[i] = i * F[i - 1] % M;
  }
  for (ll i = 2; i < N; ++i) {
    I[i] = (M - M / i) * I[M % i] % M;
  }
  for (ll i = 1; i < N; ++i) {
    IF[i] = I[i] * IF[i - 1] % M;
  }
  solve();
  return 0;
}