// ﷽
// Contest: Sheet Four || Ad-hocs
// Judge: Codeforces
// URL: https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/P
// Memory Limit: 256
// Time Limit: 1000
// Start: 13/08/2026 @ 07:54:52 AM
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
  int a[n + 5] {}, freq[1000005] {};

  int j {0}, l {1}, mxLen {0}, x {0}, y {0};
  for(int r = 1; r <= n; r++) {
    cin >> a[r];

    if(freq[a[r]]++ == 0) j++;

    while(j > k){
      if(--freq[a[l++]] == 0) j--;
    }

    if(r - l + 1 > mxLen){
      mxLen = r - l + 1;
      x = l, y = r;
    }
  }
  cout << x << ' ' << y << endl;
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
