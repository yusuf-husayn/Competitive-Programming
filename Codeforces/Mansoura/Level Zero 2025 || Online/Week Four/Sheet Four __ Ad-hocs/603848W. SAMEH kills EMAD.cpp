// ﷽
// Contest: Sheet Four || Ad-hocs
// Judge: Codeforces
// URL: https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/W
// Memory Limit: 256
// Time Limit: 1000
// Start: 16/08/2026 @ 07:23:13 PM
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
  int n, q; cin >> n >> q;

  int a[n + 5] {};
  while(q--){
    int l, r, v; cin >> l >> r >> v;

    int k = (r - l + 1);

    a[l] += v;
    a[r + 1] -= v * (k + 1);
    a[r + 2] += v * k;
  }

  for(int i = 1; i <= n; i++) a[i] += a[i - 1];
  for(int i = 1; i <= n; i++) {
    a[i] += a[i - 1];
    cout << a[i] << ' ';
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
