// ﷽
// Contest: Sheet Three || Time Complexity - Functions - Structs
// Judge: Codeforces
// URL: https://codeforces.com/group/vtfsyP8jkN/contest/596491/problem/S
// Memory Limit: 256
// Time Limit: 1000
// Start: 04/05/2026 @ 11:33:15 PM
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
  string s; cin >> s;
  vi a(26); cin >> a;

  int n = s.length();

    for(int i = 0; i < n; i++) {
      if(s[i] == '?'){

      int j = i;
      while(j < n && s[j] == '?') j++;

      int mn = 2e9;
      char bCh = 'a';
      for(char c ='a'; c <= 'z'; c++){
        int curcst {0};

      if(i > 0) curcst += abs(a[c - 'a'] - a[s[i - 1] - 'a']);
      if(j < n) curcst += abs(a[c - 'a'] - a[s[j] - 'a']);
      if(curcst < mn) mn = curcst, bCh = c;
      }

      for(int k = i; k < j; k++) s[k] = bCh;
      i = j - 1;
      }
    }
  int tCst {0};
  for (int i = 0; i < n - 1; i++) tCst += abs(a[s[i] - 'a'] - a[s[i + 1] - 'a']);

  cout << tCst << endl;
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
