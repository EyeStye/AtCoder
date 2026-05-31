#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  vector<int> A(3);
  cin >> A[0] >> A[1] >> A[2];
  sort(A.begin(), A.end());
  cout << (A[0] + A[1] == A[2] ? "Yes" : "No");
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}