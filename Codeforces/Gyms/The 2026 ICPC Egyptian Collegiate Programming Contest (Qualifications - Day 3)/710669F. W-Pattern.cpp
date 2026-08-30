// ﷽
// Contest: The 2026 ICPC Egyptian Collegiate Programming Contest (Qualifications - Day 3)
// Judge: Codeforces
// URL: https://codeforces.com/group/Rilx5irOux/contest/710669/problem/F
// Memory Limit: 256
// Time Limit: 1000
// Start: 16/08/2026 @ 06:07:57 AM
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


  int sfn1 = -1e18, sfn2 = -1e18, sfn3 = -1e18, sfn4 = -1e18 , sfn5  = -1e18;
 
  for(int i = 0; i < n; i++){
    int x; cin >> x;

    sfn5 = max(sfn5, sfn4 + x);
    sfn4 = max(sfn4, sfn3 - 2 * x);
    sfn3 = max(sfn3, sfn2 + 2 * x);
    sfn2 = max(sfn2, sfn1 - 2 * x);
    sfn1 = max(sfn1, x);
  }
  cout << sfn5 << endl;
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
