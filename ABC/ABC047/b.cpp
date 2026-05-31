#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int W, H, N;
  cin >> W >> H >> N;
  int L = 0, R = W, D = 0, U = H;
  while (N--) {
    int X, Y, A;
    cin >> X >> Y >> A;
    if (A == 1) {
      L = max(L, X);
    } else if (A == 2) {
      R = min(R, X);
    } else if (A == 3) {
      D = max(D, Y);
    } else {
      U = min(U, Y);
    }
  }
  int res = (R <= L || U <= D) ? 0 : (R - L) * (U - D);
  cout << res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}