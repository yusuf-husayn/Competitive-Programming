// ﷽
// Contest: Educational Codeforces Round 190 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2230/problem/B
// Memory Limit: 512
// Time Limit: 2000
// Start: 18/05/2026 @ 05:41:58 PM
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
  string s; cin >> s;
  int cnt2 {0}, cnt13 {0};

  for(char c : s){
    if(c == '2') cnt2++;
    else if(c == '1' || c == '3') cnt13 = max(cnt2, cnt13) + 1;
  }
  cout << s.length() - max(cnt2, cnt13) << endl;
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
