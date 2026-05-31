#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll N, T;
  cin >> N >> T;
  vector<ll> A(N), S(N + 1);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  for (int i = 0; i < N; ++i) {
    S[i + 1] = max(S[i], A[N - i - 1]);
  }
  map<ll, ll> cnt;
  for (int i = 0; i < N; ++i) {
    ll G = -A[i] + S[N - i - 1];
    if (G > 0) {
      ++cnt[G];
    }
  }
  cout << cnt.rbegin()->second;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}