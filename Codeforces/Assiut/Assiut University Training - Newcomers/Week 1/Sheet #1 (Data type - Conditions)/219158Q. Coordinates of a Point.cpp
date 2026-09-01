// ﷽
// Contest: Sheet #1 (Data type - Conditions)
// Judge: Codeforces
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q
// Memory Limit: 256
// Time Limit: 1000
// Start: 28/08/2026 @ 09:46:32 PM
//
#include <bits/stdc++.h>
using namespace std;
#ifdef JOE
// #include "debug.hpp"
#else
#define debug(...) 0
#define debug_itr(...) 0
#define debug_bits(...) 0
#endif
inline void fastio() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

#define int long long
#define all(a) (a).begin(), (a).end()
#define vi vector<int>
#define endl "\n"
#define popCnt(x) (__builtin_popcountll(x))

const int OO = 4e18;
const int MOD = 1e9 + 7;

template <typename T> istream &operator>>(istream &input, vector<T> &data) {
  for (T &x : data)
    input >> x;
  return input;
}

template <typename T> ostream &operator<<(ostream &output, const vector<T> &data) {
  for (const T &x : data)
    output << x << " ";
  return output;
}

void solve() {
  double x, y; cin >> x >> y;

  if(x == 0 && y == 0) cout << "Origem";
  else if(x == 0) cout << "Eixo Y";
  else if(y == 0) cout << "Eixo X";
  else if(x > 0 && y > 0) cout << "Q1";
  else if(x < 0 && y > 0) cout << "Q2";
  else if(x < 0 && y < 0) cout << "Q3";
  else cout << "Q4";

}

int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  // cin>>t;
  while (t--)
    solve();
  return 0;
}
