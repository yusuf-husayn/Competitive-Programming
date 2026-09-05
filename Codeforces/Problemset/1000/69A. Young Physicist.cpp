// ﷽
// Contest: Codeforces Beta Round 63 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/69/A
// Memory Limit: 256
// Time Limit: 2000
// Start: 05/09/2026 @ 10:01:05 PM
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
  int n; cin >> n;

  int xChk {0}, yChk {0}, zChk {0};
  for(int i = 0; i < n; i++){
    int x, y, z; cin >> x >> y >> z;

    xChk += x, yChk += y, zChk += z;
  }

  if(xChk == 0 && yChk == 0 && zChk == 0) cout << "YES" << endl;
  else cout << "NO" << endl;
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
