// ﷽
// Contest: Sheet Two || Arrays and Strings
// Judge: Codeforces
// URL: https://codeforces.com/group/XcpeywXZh9/contest/594700/problem/H
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon Jul 14 11:43:19 2025
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
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

#define int long long
#define all(a) (a).begin(), (a).end()
#define vi vector<int>
#define OO 2e9
#define endl "\n"
#define popCnt(x) (__builtin_popcountll(x))
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
  int n, q;
  cin >> n >> q;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  while (q--) {
    int l, r, x;
    cin >> l >> r >> x;
    --l, --r;

    int cnt = 0;
    for (int i = l; i <= r; i++) {
      if (arr[i] == x) {
        cnt++;
      }
    }
    cout << cnt << endl;
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
