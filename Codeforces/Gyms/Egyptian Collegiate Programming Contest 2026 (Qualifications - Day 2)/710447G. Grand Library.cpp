// ﷽
// Contest: Egyptian Collegiate Programming Contest 2026 (Qualifications - Day 2)
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/710447/problem/G
// Memory Limit: 256
// Time Limit: 2000
// Start: 15/08/2026 @ 06:33:01 AM
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
  int x[2005] {}, y[2005] {};

  for(int i = 0; i < n; i++) cin >> x[i] >> y[i];

  int shx, shy; cin >> shx >> shy;

  int shts {1};
  for(int i = 0; i < n; i++){
    if(x[i] == shx && y[i] < shy) shts++;
  }
  cout << shts << endl;
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
