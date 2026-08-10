// ﷽
// Contest: Codeforces Round 163 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/266/B
// Memory Limit: 256
// Time Limit: 2000
// Start: 17/05/2026 @ 10:18:08 PM
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
  int n, t; cin >> n >> t;
  string s; cin >> s;

  while(t--){
    for(int i = 0; i < n; i++){
      if(s[i] == 'B' && s[i + 1] == 'G'){
        swap(s[i], s[i + 1]);
        i++;
      }
    }
  }
  cout << s << endl;
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
