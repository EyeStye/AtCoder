#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  string S;
  cin >> S;
  string res;
  for (auto c : S) {
    if (c == 'B') {
      if (res.size()) {
        res.pop_back();
        continue;
      }
      continue;
    }
    res += c;
  }
  cout << res << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}