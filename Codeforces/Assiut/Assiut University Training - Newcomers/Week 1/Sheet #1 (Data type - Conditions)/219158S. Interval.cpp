// ﷽
// Contest: Sheet #1 (Data type - Conditions)
// Judge: Codeforces
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S
// Memory Limit: 256
// Time Limit: 1000
// Start: 29/08/2026 @ 08:34:38 PM
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
  double x; cin >> x;

  if(x >= 0 && x <= 25) cout << "Interval [0,25]";
  else if(x > 25 && x <= 50) cout << "Interval (25,50]";
  else if(x > 50 && x <= 75) cout << "Interval (50,75]";
  else if(x > 75 && x <= 100) cout << "Interval (75,100]";
  else cout << "Out of Intervals";
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
