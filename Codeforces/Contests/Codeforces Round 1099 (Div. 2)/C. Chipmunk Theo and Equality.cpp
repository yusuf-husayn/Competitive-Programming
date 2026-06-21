// ﷽
// Contest: Codeforces Round 1099 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2231/problem/C
// Memory Limit: 512
// Time Limit: 2000
// Start: 21/05/2026 @ 05:53:47 PM
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

  int ans = OO, trgt = a[0];

  for(int i = 0; i < 70; i++){
    int cst {0};
    bool crct = true;

    for(int x : a){
      int stps {0};

      while(x != trgt && stps < 70){
        x = (x % 2 == 0) ? x / 2 : x + 1;
        stps++;
      }

      if(x != trgt){
        crct = false;
        break;
      }
      cst += stps;
    }
    if(crct) ans = min(ans, cst);
    trgt = (trgt % 2 == 0) ? trgt / 2 : trgt + 1;
  }
  cout << ans << endl;
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
