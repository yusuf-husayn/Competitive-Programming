// ﷽
// Contest: Sheet1 | Conditions and Loops
// Judge: Codeforces
// URL: https://codeforces.com/group/XcpeywXZh9/contest/592161/problem/R
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed Jul  2 15:15:17 2025
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
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define int long long
#define all(a) (a).begin(), (a).end()
#define vi vector<int>
#define OO 2e9
#define endl "\n"
#define popCnt(x) (__builtin_popcountll(x))
const int MOD = 1e9 + 7;

template <typename T> istream &operator>>(istream &input, vector<T> &data) {
  for (T &x : data)
    input >> x;
  return input;
}
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data) {

  for (const T &x : data)
    output << x << " ";
  return output;
}

void solve() {
  int v, a, b, c;
  cin >> v >> a >> b >> c;
  while (true) {
    if (v < a) {
      cout << "F" << endl;
      break;
    }
    v -= a;
    if (v < b) {
      cout << "M" << endl;
      break;
    }
    v -= b;
    if (v < c) {
      cout << "T" << endl;
      break;
    }
    v -= c;
  }
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
