#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int A, B, C;
  cin >> A >> B >> C;
  set<int> S;
  S.insert(A);
  S.insert(B);
  S.insert(C);
  cout << S.size() << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}