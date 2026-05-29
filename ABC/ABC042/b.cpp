#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll N, L;
  cin >> N >> L;
  vector<string> A(N);
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  string res;
  for (auto& s : A) {
    res += s;
  }
  cout << res << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}