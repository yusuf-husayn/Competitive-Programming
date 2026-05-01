// ﷽
// Contest: Codeforces Round 1096 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2227/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: 30/04/2026 @ 06:42:52 PM
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
  vi a(2 * n); cin >> a;

  int cnt {0};
  vi p(n + 2, 0);

  for(int i = 0; i < 2 * n; i++){
    int l = i, r = i, mx = 0;
    while(l >= 0 && r < 2 * n && a[l] == a[r]){
      p[a[l--]] = 1;
      p[a[r++]] = 1;

      while(p[mx] == 1) mx++;

      cnt = max(mx, cnt);
    }
    for(int j = l + 1; j < r; j++) p[a[j]] = 0;

    l = i, r = i + 1; mx = 0;
     while(l >= 0 && r < 2 * n && a[l] == a[r]){
      p[a[l--]] = 1;
      p[a[r++]] = 1;

      while(p[mx] == 1) mx++;

      cnt = max(mx, cnt);
    }
    for(int j = l + 1; j < r; j++) p[a[j]] = 0;

  }
  cout << cnt << endl;
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
