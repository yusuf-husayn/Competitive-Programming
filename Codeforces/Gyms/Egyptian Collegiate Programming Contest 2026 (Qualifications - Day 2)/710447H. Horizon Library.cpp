// ﷽
// Contest: Egyptian Collegiate Programming Contest 2026 (Qualifications - Day 2)
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/710447/problem/H
// Memory Limit: 256
// Time Limit: 1000
// Start: 15/08/2026 @ 10:04:39 AM
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
  int n, k, b {0}, cnt {1}; cin >> n >> k;

  int v[10] {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

  while(--n){
    for(int i = 1; i < 10; i++) v[i] = (v[i] + v[i - 1]) % MOD;
    reverse(v, v + 10);
  }
  for(int x : v) b = (b + x) % MOD;

  for(; k; k /= 2, b = b * b % MOD) if(k % 2) cnt = (cnt * b) % MOD;
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
