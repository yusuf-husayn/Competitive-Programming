// ﷽
// Contest: Sheet Four || Ad-hocs
// Judge: Codeforces
// URL: https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/J
// Memory Limit: 256
// Time Limit: 2000
// Start: 12/08/2026 @ 07:51:49 AM
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
  int a1[100005] {}, a2[100005] {};
  for(int i = 1; i <= n; i++) cin >> a1[i];

  copy(a1 + 1, a1 + n + 1, a2 + 1);
  sort(a2 + 1, a2 + n + 1);

  for(int i = 1; i <= n; i++) a1[i] += a1[i - 1], a2[i] += a2[i - 1];

  int m; cin >> m;
  while(m--){
    int x, l, r; cin >> x >> l >> r;
    cout << ((x == 1) ? a1[r] - a1[l - 1] : a2[r] - a2[l - 1]);
    cout << endl;
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
