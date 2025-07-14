// ﷽
// Contest: Sheet Two || Arrays and Strings
// Judge: Codeforces
// URL: https://codeforces.com/group/XcpeywXZh9/contest/594700/problem/G
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon Jul 14 11:13:58 2025
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
  int n;
  cin >> n;
  int mtx[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> mtx[i][j];
    }
  }
  int sm1 = 0, sm2 = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        sm1 += mtx[i][j];
      }
      if (i + j == n - 1) {
        sm2 += mtx[i][j];
      }
    }
  }
  cout << abs(sm1 - sm2) << endl;
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
