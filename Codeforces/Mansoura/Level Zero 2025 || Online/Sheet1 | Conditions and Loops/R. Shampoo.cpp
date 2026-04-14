// ﷽
// Contest: Sheet One || Conditions and Loops
// Judge: Codeforces
// URL: https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/R
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue Apr 14 17:22:45 2026
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
  int V, A, B, C; cin >> V >> A >> B >> C;
  V %= (A + B + C);
    if( V < A) cout << "F" << endl;
    else if(V < (A + B)) cout << "M" << endl;
    else cout << "T" << endl;
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
