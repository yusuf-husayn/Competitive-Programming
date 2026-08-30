// ﷽
// Contest: ECPC Qualifications 2025 Day 4 (Mirror)
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/627042/problem/I
// Memory Limit: 1024
// Time Limit: 1000
// Start: 12/08/2026 @ 06:01:40 PM
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
  int a,b; cin >> a >> b;
    if (b == 0) {
    cout << a <<" "<< 1 << endl;
    return;
  }
 
    int sum = (a + 4) / 2;
    int p = a + b ;
    int s =  ( sum * sum ) - ( 4 * p );
    int root_s = sqrtl(s);

  while((__int128)(root_s + 1) * (root_s + 1) <= s) ++root_s;
  while((__int128)root_s * root_s > s) --root_s;
    int mn = ( sum - root_s ) / 2;
    int mx = ( sum + root_s ) / 2;
 
    cout << mx << ' ' << mn << '\n';
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
