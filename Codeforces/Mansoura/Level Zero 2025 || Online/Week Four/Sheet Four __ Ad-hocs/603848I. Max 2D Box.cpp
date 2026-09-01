// ﷽
// Contest: Sheet Four || Ad-hocs
// Judge: Codeforces
// URL: https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/I
// Memory Limit: 256
// Time Limit: 1000
// Start: 11/08/2026 @ 07:29:57 PM
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
  int n, m, x, y; cin >> n >> m >> x >> y;
  int arr[1005][1005];

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++) cin >> arr[i][j];
  }

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++) arr[i][j] += arr[i][j - 1];
  }

  for(int i = 1; i <= m; i++){
    for(int j = 1; j <= n; j++) arr[j][i] += arr[j - 1][i];
  }

  int mx {-OO};
  for(int i = x; i <= n; i++){
    for(int j = y; j <= m; j++){
      int sm = arr[i][j] - arr[i - x][j] - arr[i][j - y] + arr[i - x][j - y];
      mx = max(mx, sm);
    }
  }
  cout << mx << endl;
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
