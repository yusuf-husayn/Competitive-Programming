// ﷽
// Contest: Egyptian Collegiate Programming Contest 2026 (Qualifications - Day 2)
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/710447/problem/O
// Memory Limit: 256
// Time Limit: 1000
// Start: 15/08/2026 @ 10:48:52 AM
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
  int n, cnt {0}; cin >> n;
  string a, b; cin >> a >> b;

  int p[26][26] {}, w[26][26] {};

  for(int i = 0; i < n; i++){
    int u = a[i] - 'a', v = b[i] - 'a';
    int pPs {0}, wPs {0};

    for(int j = 0; j < 26; j++)
      if(j != v && p[u][j] > pPs) pPs = p[u][j], wPs = w[u][j];

    p[u][v] = i + 1;

    cnt = max(cnt, w[u][v] = wPs + (u != v));
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
