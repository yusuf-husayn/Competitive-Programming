// ﷽
// Contest: Codeforces Round 1102 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2234/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: 07/06/2026 @ 05:47:54 PM
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
  vi h(n); cin >> h;

  for(int i = 0; i < n; i++){

    vi H(n);
    for(int j = 0; j < n; j++) H[j] = h[(i + j) % n];

    vi pref(n);
    pref[0] = H[0];
    for(int j = 1; j < n; j++) pref[j] = max(pref[j - 1], H[j]);

    vi suff(n);
    suff[n - 1] = H[n - 1];
    for(int j = n - 2; j >= 0; j--) suff[j] = max(suff[j + 1], H[j]);

    int ttl {0};
    for(int j = 0; j < n - 1; j++) ttl += min(pref[j], suff[j + 1]);

    cout << ttl << ' ';
  }

  cout << endl;
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
