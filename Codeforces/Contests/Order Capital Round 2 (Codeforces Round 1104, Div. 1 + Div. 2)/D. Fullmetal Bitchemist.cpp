// ﷽
// Contest: Order Capital Round 2 (Codeforces Round 1104, Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2237/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: 18/06/2026 @ 06:00:18 PM
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

  int ttl = n * (n + 1) / 2;
  vi cnt(3, 0);
  cnt[0] = 1;

  int sm = 0, alt = 1;
  for(int i = 0; i < n; i++){
    sm = (sm + (s[i] == '0' ? 1 : 2)) % 3;
    ttl -= cnt[sm];
    cnt[sm]++;

    (i > 0 && s[i] != s[i - 1]) ? alt++ : alt = 1;
    ttl -= (alt - 1) / 2;
  }
  cout << ttl << endl;
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
