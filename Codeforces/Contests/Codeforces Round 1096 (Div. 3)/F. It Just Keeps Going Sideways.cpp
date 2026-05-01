// ﷽
// Contest: Codeforces Round 1096 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2227/problem/F
// Memory Limit: 256
// Time Limit: 2000
// Start: 30/04/2026 @ 07:09:14 PM
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
  int n; cin >> n;
  vi a(n), freq(n + 2, 0); cin >> a;

  for(int i = 0; i < n; i++) freq[a[i]]++;

  vi clm(n + 2, 0);
  for(int i = n; i >= 1; i--) clm[i] = clm[i + 1] + freq[i];

  int d = 0, mxd = 0;
  for(int i = 0; i < n; i++){
    d += a[i] * (n - 1 - i);

    if(a[i] > 0) mxd = max(mxd, (i + 1) - n + clm[a[i]] - 1);
  }
  for(int i = 1; i <= n; i++) d -= clm[i] * (clm[i] - 1) / 2;

  cout << d + mxd << endl;
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
