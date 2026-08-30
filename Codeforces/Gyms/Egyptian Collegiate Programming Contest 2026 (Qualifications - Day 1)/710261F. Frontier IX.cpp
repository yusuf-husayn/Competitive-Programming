// ﷽
// Contest: Egyptian Collegiate Programming Contest 2026 (Qualifications - Day 1)
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/710261/problem/F
// Memory Limit: 256
// Time Limit: 1000
// Start: 14/08/2026 @ 10:38:07 AM
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

int32_t a[5005] {}, mxV[5005][5005] {};
void solve() {
  int n; cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i];

  for(int i = 1; i <= n; i++){
    int mx = a[i], crt = a[i];
    mxV[i][i] = mx;

    for(int j = i + 1; j <= n; j++){
      crt = crt ^ a[j];

      if(crt > mx) mx = crt;
      mxV[i][j] = mx;
    }
  }

  for(int ln = 2; ln <= n; ln++){
    for(int i = 1; i <= n - ln + 1; i++){
      int j = i + ln - 1;
      mxV[i][j] = max({mxV[i][j], mxV[i+1][j], mxV[i][j-1]});
    }
  }

  int q; cin >> q;
  while(q--){
    int l, r; cin >> l >> r;
    cout << mxV[l][r] << endl;
  }
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
