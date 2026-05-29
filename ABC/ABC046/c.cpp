#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll N;
  cin >> N;
  ll T = 0, A = 0;
  while (N--) {
    ll t, a;
    cin >> t >> a;
    if (t >= T && a >= A) {
      T = t, A = a;
      // cout << T << " " << A << "\n";
      continue;
    }
    else {
      ll K = (A + a - 1) / a, k = (T + t - 1) / t, A_ = 1e18, T_ = 1e18;
      ll Ta = K * t, Tt = k * t, Aa = K * a, At = k * a;
      if (Ta >= T) {
        T_ = Ta, A_ = Aa;
      }
      if (At >= A) {
        if (T_ + A_ > Tt + At) {
          T_ = Tt, A_ = At;
        }
      } 
      T = T_, A = A_;
      // cout << T << " " << A << "\n";
    }
  }
  cout << T + A << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}