// ﷽
// Contest: Sheet1 | Conditions and Loops
// Judge: Codeforces
// URL: https://codeforces.com/group/XcpeywXZh9/contest/592161/problem/H
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue Jul  1 21:09:03 2025
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
  int t, r;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> r;
    if (r >= 1900)
      cout << "Division 1" << endl;
    else if (r >= 1600)
      cout << "Division 2" << endl;
    else if (r >= 1400)
      cout << "Division 3" << endl;
    else
      cout << "Division 4" << endl;
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
