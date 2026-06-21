// ﷽
// Contest: Codeforces Round 1102 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2234/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: 07/06/2026 @ 05:59:19 PM
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
  int n, k; cin >> n >> k;
  string s, z; cin >> s >> z;

  int C[2][2] {0};

  for(int i = 0; i < n; i++) C[s[i] - '0'][z[i] - '0']++;

  int A {1}, B {2};
  while(k--){
    int nxA = A + B - 1;
    B = 2 * A;
    A = nxA;
  }

  int res = (C[0][0] + C[1][1]) * (C[0][1] + C[1][0]) * A + (C[0][0] * C[1][1] + C[0][1] * C[1][0]) * B;
  cout << res << endl;
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
