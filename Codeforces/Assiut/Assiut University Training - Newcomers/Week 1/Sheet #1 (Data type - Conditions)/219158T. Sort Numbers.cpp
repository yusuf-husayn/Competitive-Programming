// ﷽
// Contest: Sheet #1 (Data type - Conditions)
// Judge: Codeforces
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
// Memory Limit: 256
// Time Limit: 250
// Start: 29/08/2026 @ 08:47:58 PM
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
  int a, b, c; cin >> a >> b >> c;

  int x = min ({a, b, c}), z = max({a, b, c}), y = (a + b + c) - (x + z);
  cout << x << endl << y << endl << z << endl
       << endl << a << endl << b << endl << c;
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
