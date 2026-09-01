// ﷽
// Contest: Sheet Four || Ad-hocs
// Judge: Codeforces
// URL: https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/T
// Memory Limit: 256
// Time Limit: 1000
// Start: 15/08/2026 @ 06:53:27 PM
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
  int n, m; cin >> n >> m;
  int a[n + 5][m + 5] {}, ac[n + 5][m + 5] {};

  int s; cin >> s;
  while(s--){
    int d, p;
    string v; cin >> d >> p >> v;

    if(ac[d][p]) continue;
    if(v == "AC") ac[d][p] = true;
    else a[d][p]++;
  }

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      if(!ac[i][j]) a[i][j] = 0;

    a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
    }
  }

  int q; cin >> q;
  while(q--){
    int c1, p1, c2, p2; cin >> c1 >> p1 >> c2 >> p2;

    int sm = a[c2][p2] - a[c1 - 1][p2] - a[c2][p1 - 1] + a[c1 - 1][p1 - 1];

    cout << sm << endl;
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
