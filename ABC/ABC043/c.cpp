#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll N;
  cin >> N;
  vector<ll> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  ll res = 1e9, M = accumulate(A.begin(), A.end(), 0LL) / N, ans = 0, ans1 = 0;
  for (auto& x : A) {
    ans += (x - M) * (x - M);
    ans1 += (x - M - 1) * (x - M - 1);
  }
  cout << min(ans, ans1) << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}