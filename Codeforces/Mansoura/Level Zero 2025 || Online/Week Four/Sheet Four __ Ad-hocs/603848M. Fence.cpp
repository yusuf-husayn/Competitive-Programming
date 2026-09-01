// ﷽
// Contest: Sheet Four || Ad-hocs
// Judge: Codeforces
// URL: https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/M
// Memory Limit: 256
// Time Limit: 1000
// Start: 12/08/2026 @ 10:49:53 AM
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
  int arr[n + 5] {};
  for(int i = 1; i <= n; i++) cin >> arr[i];

  for(int i = 1; i <= n; i++) arr[i] += arr[i - 1];

  int mn {OO}, mnIdx {1};
  for(int l = 1, r = k; r <= n; l++, r++){
    int sm = arr[r] - arr[l - 1];
    if(sm < mn){
      mn = sm, mnIdx = l;
    }
  }
  cout << mnIdx << endl;
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
