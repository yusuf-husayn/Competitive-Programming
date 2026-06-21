// ﷽
// Contest: Educational Codeforces Round 190 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2230/problem/C
// Memory Limit: 512
// Time Limit: 2000
// Start: 18/05/2026 @ 05:56:03 PM
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

  int sngl {0}, rptd {0}, ttl {0};

  for(int i = 0; i < n; i++){
    int x; cin >> x;

    if(x == 1) sngl++;
    else rptd += x, ttl += (x - 2) / 2;
  }

  int cnt = n - sngl;
  if(cnt == 0) cout << 0 << endl;
  else if(cnt == 1){
    int res = rptd + min(sngl, rptd / 2);
    cout << (res < 3 ? 0 : res) << endl;
  }else cout << rptd + min(sngl, ttl) << endl;
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
