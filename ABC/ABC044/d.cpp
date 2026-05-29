#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll N, S;
  cin >> N >> S;
  if (N == S) {
    cout << N + 1 << "\n";
    return;
  }
  ll res = 1e12;
  for (ll i = 1; i * i <= N - S; ++i) {
    if ((N - S) % i) {
      continue;
    }
    ll B = i + 1, X = N, tot = 0;
    while (X) {
      tot += X % B;
      X /= B;
    }
    res = tot == S ? min(res, B) : res;
    tot = 0, X = N, B = (N - S) / i + 1;
    while (X) {
      tot += X % B;
      X /= B;
    }
    res = tot == S ? min(res, B) : res;
  }
  cout << (res == 1e12 ? -1 : res) << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}