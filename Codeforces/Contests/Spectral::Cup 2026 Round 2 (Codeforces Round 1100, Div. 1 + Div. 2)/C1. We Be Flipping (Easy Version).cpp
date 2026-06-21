// ﷽
// Contest: Spectral::Cup 2026 Round 2 (Codeforces Round 1100, Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2229/problem/C1
// Memory Limit: 256
// Time Limit: 2000
// Start: 23/05/2026 @ 05:55:54 PM
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
  vi a(n); cin >> a;

  vi ans(n);
  int k {0};
  bool f = false;

  for(int i = n - 1; i >= 0; i--){
    int val = a[i];
    if(f) val = -val;

    if(val > 0) ans[k++] = i + 1, f = !f;
  }
  cout << k << endl;
  for(int i = 0; i < k; i++) cout << ans[i] << ' ';
  cout << endl;
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
