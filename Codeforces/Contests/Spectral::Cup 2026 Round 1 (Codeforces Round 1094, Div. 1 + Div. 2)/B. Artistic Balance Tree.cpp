// ﷽
// Contest: Spectral::Cup 2026 Round 1 (Codeforces Round 1094, Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2222/problem/B
// Memory Limit: 256
// Time Limit: 1500
// Start: 25/04/2026 @ 05:50:37 PM
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
  int n, m; cin >> n >> m;

  int cnt {0};
  vi e_o[2], c(2, 0);

  for(int i = 0; i < n; i++){
    int x; cin >> x;
    cnt += x;

    e_o[i % 2].push_back(x);
  }

  for(int i = 0; i < m; i++){
    int x; cin >> x;

    c[(x - 1) % 2]++;
  }

  for (int p = 0; p < 2; p++) {
      sort(e_o[p].begin(), e_o[p].end(), greater<int>());

      int lmt = min((int)e_o[p].size(), c[p]);
      for (int i = 0; i < lmt; i++) {
      if(i == 0 || e_o[p][i] > 0) cnt -= e_o[p][i];
    }
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
