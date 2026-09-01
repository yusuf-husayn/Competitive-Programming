// ﷽
// Contest: Sheet Four || Ad-hocs
// Judge: Codeforces
// URL: https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/O
// Memory Limit: 256
// Time Limit: 4000
// Start: 13/08/2026 @ 07:01:01 AM
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
  int n, m; cin >> n >> m;
  int a[n + 5] {}, b[m + 5] {};

  for(int i = 1; i <= n; i++) cin >> a[i];
  for(int i = 1; i <= m; i++) cin >> b[i];

  for(int i = 1; i <= n; i++) a[i] += a[i - 1];

  int rm {1};
  for(int i = 1; i <= m; i++){
    while(b[i] > a[rm]) rm++;
    cout << rm << ' ' << b[i] - a[rm - 1] << endl;
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
