// ﷽
// Contest: Educational Codeforces Round 191 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2233/problem/A
// Memory Limit: 512
// Time Limit: 2000
// Start: 09/06/2026 @ 05:35:07 PM
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
  int n, x, y, z; cin >> n >> x >> y >> z;

  int op1 = (n + x + y - 1) / (x + y);
  int op2 = (n <= x * z) ? (n + x - 1) / x : z + (n - x * z + x + 10 * y - 1) / (x + 10 * y);

  cout << min(op1, op2) << endl;
}

int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
   cin>>t;
  while (t--)
    solve();
  return 0;
}
