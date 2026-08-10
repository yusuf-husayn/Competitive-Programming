// ﷽
// Contest: Codeforces Round 146 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/236/A
// Memory Limit: 256
// Time Limit: 1000
// Start: 08/05/2026 @ 07:43:29 PM
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
  int n = s.length();
  int freq[26] {};

  for(int i = 0; i < n; i++) freq[s[i] - 'a']++;

  int cnt{0};
  for(int i = 0; i < 26; i++){
    if(freq[i] > 0) cnt++;
  }

  cout << ((cnt % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;
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
