// ﷽
// Contest: Codeforces Round 1099 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2231/problem/B
// Memory Limit: 256
// Time Limit: 1500
// Start: 21/05/2026 @ 05:44:14 PM
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

  int L {0};
  for(int i = 0; i < n - 1; i++){
    if(a[i] > a[i + 1]) L = max(L, a[i] - a[i + 1]);
  }

  if(L == 0) return void(cout << "YES" << endl);

  int mxrise = L;
  for(int i = 0; i < n - 1; i++){
    if(a[i] > a[i + 1]){
      if(mxrise < L) return void(cout << "NO" << endl);
      mxrise = 0;
    } else mxrise = max(mxrise, a[ i + 1] - a[i]);
  }
  cout << "YES" << endl;
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
