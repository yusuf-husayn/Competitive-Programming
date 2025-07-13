// ﷽
// Contest: Contest One
// Judge: Codeforces
// URL: https://codeforces.com/group/XcpeywXZh9/contest/593212/problem/E
// Memory Limit: 256
// Time Limit: 500
// Start: Fri Jul  4 16:15:11 2025
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
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    int s1 = (n * (n + 1) * (2 * n + 1)) / 6, s2 = (n * (n + 1) / 2);
    cout << (s2 * s2) - s1 << endl;
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
