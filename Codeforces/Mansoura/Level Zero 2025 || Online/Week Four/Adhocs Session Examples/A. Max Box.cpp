// ﷽
// Contest: Adhocs Session Examples
// Judge: Codeforces
// URL: https://codeforces.com/gym/517439/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: 09/08/2026 @ 04:30:07 PM
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
  int arr[n];
  for(int i = 1; i <= n; i++) cin >> arr[i];

  for(int i = 1; i <= n; i++) arr[i] += arr[i - 1];

  int Msm {0};
  for(int i = k; i <= n; i++){
    int Csm = arr[i] - arr[i - k];
    Msm = max(Msm, Csm);
  }
  cout << Msm << endl;
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
