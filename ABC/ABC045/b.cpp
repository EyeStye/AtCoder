#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  string A, B, C;
  cin >> A >> B >> C;
  vector<int> P(3);
  vector<string> S = {A, B, C};
  int ptr = 0;
  while (1) {
    if (P[ptr] == (int)S[ptr].size()) {
      cout << (!ptr ? 'A' : (ptr == 1) ? 'B' : 'C') << "\n";
      return;
    }
    ++P[ptr];
    ptr = S[ptr][P[ptr] - 1] - 'a';
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}