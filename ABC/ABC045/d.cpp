#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll H, W, N;
  cin >> H >> W >> N;
  map<ll, int> cnt;
  ll tot = (H - 2) * (W - 2);
  for (int _ = 0; _ < N; ++_) {
    ll X, Y;
    cin >> X >> Y;
    --X, --Y;
    for (int i = -1; i <= 1; ++i) {
      for (int j = -1; j <= 1; ++j) {
        ll F = W * (X + i) + (Y + j);
        if (1 <= X + i && X + i <= H - 2 && 1 <= Y + j && Y + j <= W - 2) {
          ++cnt[F];
        }
      }
    }
  }
  vector<ll> res(10);
  for (auto& [k, v] : cnt) {
    // cout << k << " " << v << "\n";
    ++res[v];
    --tot;
  }
  res[0] = tot;
  for (int i = 0; i < 10; ++i) {
    cout << res[i] << "\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}