#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  string S;
  cin >> S;
  int N = S.size();
  ll res = 0;
  for (int i = 0; i < (1 << (N - 1)); ++i) {
    string T(1, S[0]);
    for (int j = 1; j < N; ++j) {
      if ((i >> (j - 1)) & 1) {
        res += stoll(T);
        T = to_string(S[j] - '0');
      } else {
        T += S[j];
      }
    }
    res += stoll(T);
  }
  cout << res << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}