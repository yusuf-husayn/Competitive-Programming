// ﷽
// Contest: Codeforces Round 105 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/148/A
// Memory Limit: 256
// Time Limit: 2000
// Start: 27/05/2026 @ 09:10:08 PM
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
  int k, l, m, n, d; cin >> k >> l >> m >> n >> d;

  int cnt {0};
  for(int i = 1; i <= d; i++){
    if((i % k == 0) || (i % l == 0) || (i % m == 0) || (i % n == 0)) cnt++;
  }
  cout << cnt << endl;
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
