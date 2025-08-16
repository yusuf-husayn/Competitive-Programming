// ﷽
// Contest: Week 2 (conditions)
// Judge: Codeforces
// URL: https://codeforces.com/group/PwetbLUszb/contest/560556/problem/E
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat Aug 16 22:06:32 2025
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
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define int long long
#define all(a) (a).begin(), (a).end()
#define vi vector<int>
#define OO 2e9
#define endl "\n"
#define popCnt(x) (__builtin_popcountll(x))
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
  char a;
  cin >> a;
  if (a >= 'a' && a <= 'z')
    cout << "small" << ' ' << (a - 'a') % 26 << endl;
  else if (a >= 'A' && a <= 'Z')
    cout << "capital" << ' ' << (a - 'A') % 26 << endl;

  else if (a >= '0' && a <= '9')
    cout << "digit" << endl;
  else
    cout << "symbol" << endl;
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
