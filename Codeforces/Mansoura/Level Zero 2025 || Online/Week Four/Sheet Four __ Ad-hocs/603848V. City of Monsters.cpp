// ﷽
// Contest: Sheet Four || Ad-hocs
// Judge: Codeforces
// URL: https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/V
// Memory Limit: 1024
// Time Limit: 700
// Start: 16/08/2026 @ 06:38:08 PM
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
 
  int a[1005][1005] {};
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++) cin >> a[i][j];
  }
 
  int ans[11][1005][1005] {};
  for(int p = 1; p <= 10; p++){
 
    for(int i = 1; i <= n; i++){
      for(int j = 1; j <= m; j++){
        int val = (a[i][j] < p) ? 1 : 0;
        ans[p][i][j] = val + ans[p][i - 1][j] + ans[p][i][j - 1] - ans[p][i - 1][j - 1];
      }
    }
  }
 
  int q; cin >> q;
  while(q--){
    int mx1, my1, mx2, my2, mp; cin >> mx1 >> my1 >> mx2 >> my2 >> mp;
    int sx1, sy1, sx2, sy2, sp; cin >> sx1 >> sy1 >> sx2 >> sy2 >> sp;
 
    if(mx1 > mx2) swap(mx1, mx2);
    if(my1 > my2) swap(my1, my2);
    if(sx1 > sx2) swap(sx1, sx2);
    if(sy1 > sy2) swap(sy1, sy2);
 
    int mo7a = ans[mp][mx2][my2] - ans[mp][mx1 - 1][my2] - ans[mp][mx2][my1 - 1] + ans[mp][mx1 - 1][my1 - 1];
    int samo7a = ans[sp][sx2][sy2] - ans[sp][sx1 - 1][sy2] - ans[sp][sx2][sy1 - 1] + ans[sp][sx1 - 1][sy1 - 1];
 
    if(mo7a > samo7a) cout << "Mo7a " << mo7a;
    else if(mo7a < samo7a) cout << "Samo7a " << samo7a;
    else{
      if(samo7a == 0) cout << "Sameh";
      else cout << "Draw " << samo7a;
    }
    cout << endl;
  }
}

int32_t main() {

   freopen("pink.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
  // cin>>t;
  while (t--)
    solve();
  return 0;
}
