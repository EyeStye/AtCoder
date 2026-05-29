#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int A, B, C;
  cin >> A >> B >> C;
  vector<ll> cnt(11);
  ++cnt[A];
  ++cnt[B];
  ++cnt[C];
  cout << (cnt[5] == 2 && cnt[7] == 1 ? "YES" : "NO") << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}