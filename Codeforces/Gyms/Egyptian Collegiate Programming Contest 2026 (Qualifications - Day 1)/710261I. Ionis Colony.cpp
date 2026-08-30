// ﷽
// Contest: Egyptian Collegiate Programming Contest 2026 (Qualifications - Day 1)
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/710261/problem/I
// Memory Limit: 256
// Time Limit: 1000
// Start: 14/08/2026 @ 08:23:00 AM
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
  int n, l, r; cin >> n >> l >> r;

  int cnt {0};
  for(int d = 1; d <= r; d++){
    int mod = n % d, lLim = max(l, d) - 1;

    int crr = (r >= mod) ? (r - mod) / d + 1 : 0;
    int err = (lLim >= mod) ? (lLim - mod) / d + 1 : 0;

    cnt += crr - err;
  }

  cout << cnt << endl;
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
