#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  string S;
  cin >> S;
  vector<int> cnt(26);
  ll F = 1;
  for (auto& c : S) {
    ++cnt[c - 'a'];
  }
  for (int i = 0; i < 26; ++i) {
    F &= (cnt[i] % 2 == 0);
  }
  cout << (F ? "Yes" : "No") << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}