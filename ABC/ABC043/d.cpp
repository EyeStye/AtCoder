#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  string S;
  cin >> S;
  int N = S.size();
  vector<vector<int>> P(26, vector<int>(N + 1));
  for (int i = 0; i < 26; ++i) {
    for (int j = 1; j <= N; ++j) {
      P[i][j] += P[i][j - 1] + (S[j - 1] - 'a' == i);
    }
  }
  for (int i = 0; i < 26; ++i) {
    for (int j = 0; j <= N; ++j) {
      P[i][j] = 2 * P[i][j] - j;
    }
  }
  for (auto& f : P) {
    int L = 0, R = 2;
    while (L < R && L <= N && R <= N) {
      if (f[L] < f[R]) {
        cout << L + 1 << " " << R << "\n";
        return;
      }
      if (L < N && f[R - 1] < f[L]) {
        L = R - 1;
      }
      ++R;
    }
  }
  cout << "-1 -1\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}