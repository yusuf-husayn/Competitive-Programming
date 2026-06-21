// ﷽
// Contest: Order Capital Round 2 (Codeforces Round 1104, Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2237/problem/B
// Memory Limit: 256
// Time Limit: 1500
// Start: 18/06/2026 @ 05:42:12 PM
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
  vi a(n), b(n); cin >> a >> b;

  vi srtdA = a;
  sort(all(srtdA));
  for(int i = 0; i < n; i++){
    if(srtdA[i] > b[i]) return void(cout << -1 << endl);
  }

  int ans {0};
  vector<bool> usd(n, false);

  for(int j = 0; j < n; j++){
    int avCnt {0};
    for(int i = 0; i < n; i++){
      if(usd[i]) continue;

      if(a[i] <= b[j]){
        usd[i] = true;
        ans += avCnt;
        break;
      }
      avCnt++;
    }
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
