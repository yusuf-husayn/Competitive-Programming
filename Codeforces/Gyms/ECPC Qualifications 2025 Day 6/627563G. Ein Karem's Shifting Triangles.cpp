// ﷽
// Contest: ECPC Qualifications 2025 Day 6
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/627563/problem/G
// Memory Limit: 256
// Time Limit: 2000
// Start: 12/08/2026 @ 04:43:06 PM
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

  pair<pair<int, int>, pair<int, int>> a[n];

  for(int i = 0; i < n; i++){
    pair<int, int> p[3];
    cin >> p[0].first >> p[0].second >> p[1].first >> p[1].second >> p[2].first >> p[2].second;

    sort(p, p + 3);

    a[i] = {{p[1].first - p[0].first, p[1].second - p[0].second}, {p[2].first - p[0].first, p[2].second - p[0].second}};
  }

  sort(a, a + n);

  int ans{1};
  for(int i = 1; i < n; i++) if(a[i] != a[i - 1]) ans++;

  if(n == 0) ans = 0;

  cout << ans << endl;
}

int32_t main() {

  //  freopen("whereami.in", "r", stdin);
  //  freopen("whereami.out", "w", stdout);
  fastio();
  int t = 1;
   //cin>>t;
  while (t--)
    solve();
  return 0;
}
