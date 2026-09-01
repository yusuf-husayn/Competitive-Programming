// ﷽
// Contest: Sheet Four || Ad-hocs
// Judge: Codeforces
// URL: https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/G
// Memory Limit: 512
// Time Limit: 2500
// Start: 11/08/2026 @ 03:50:08 PM
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

int x {200005};
void solve() {
  int n, k, q; cin >> n >> k >> q;
  int freq[x] {};

  while(n--){
    int l, r; cin >> l >> r;
    freq[l]++, freq[r + 1]--;
  }
 
  int Cs {0};
  for(int i = 1; i <= x; i++) {
    Cs += freq[i];
    freq[i] = freq[i - 1] + (Cs >= k ? 1 :0);
  }
  while(q--){
    int a, b; cin >> a >> b;
    cout << freq[b] - freq[a - 1] << endl;
  }
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
