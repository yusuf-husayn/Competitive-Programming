// ﷽
// Contest: Sheet Three || Time Complexity - Functions - Structs
// Judge: Codeforces
// URL: https://codeforces.com/group/vtfsyP8jkN/contest/596491/problem/L
// Memory Limit: 256
// Time Limit: 1000
// Start: 02/05/2026 @ 03:08:28 PM
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
template <typename T>
ostream &operator<<(ostream &output, const vector<T> &data) {

  for (const T &x : data)
    output << x << " ";
  return output;
}

void solve() {
  int n, m; cin >> n >> m;
  vi a(n); cin >> a;

  for(int i = 0; i < n; i++) a[i] = ceil(a[i] / (double)m);

  int mx = 0, idx = 0;
  for(int i = 0; i < n; i++){
    if(mx <= a[i]) mx = a[i], idx = i + 1;
  }
  cout << idx << endl;
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
