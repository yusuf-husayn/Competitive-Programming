// ﷽
// Contest: Egyptian Collegiate Programming Contest 2026 (Qualifications - Day 1)
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/710261/problem/H
// Memory Limit: 256
// Time Limit: 3000
// Start: 14/08/2026 @ 06:49:00 AM
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
  string s; cin >> s;

  int err {0}, idx {0};
  for(int i = 0; i < n - 1; i++){
    if(s[i] > s[i + 1]) err++, idx = i;
  }

  if(err == 0) return void(cout << 0 << endl);

  if(err == 1 && s[n - 1] <= s[0]) {
    cout << min(idx + 1, n - 1 - idx) << endl;
    return;
  }

  cout << -1 << endl;
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
