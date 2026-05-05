// ﷽
// Contest: Sheet Three || Time Complexity - Functions - Structs
// Judge: Codeforces
// URL: https://codeforces.com/group/vtfsyP8jkN/contest/596491/problem/Q
// Memory Limit: 256
// Time Limit: 2000
// Start: 04/05/2026 @ 08:33:17 PM
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
  vi a(n); cin >> a;

  vi freq(2 * n + 5, 0);

  int cnt {0};
  for(int i = 0; i < n; i++){
    a[i] = a[i] - i + n;
    cnt += freq[a[i]];
    freq[a[i]]++;
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
