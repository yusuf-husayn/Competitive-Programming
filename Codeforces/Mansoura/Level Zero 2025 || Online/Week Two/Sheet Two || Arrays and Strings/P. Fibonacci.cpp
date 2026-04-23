// ﷽
// Contest: Sheet Two || Arrays and Strings
// Judge: Codeforces
// URL: https://codeforces.com/group/vtfsyP8jkN/contest/594700/problem/P
// Memory Limit: 256
// Time Limit: 1000
// Start: 22/04/2026 @ 02:41:43 PM
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
  int N; cin >> N;
  if(N == 1){
    cout << 0 << endl;
    return;
  }
  if(N == 2){
    cout << 1 << endl;
    return;
  }

  int a {0}, b(1);

  for(int i = 3; i <= N; i++){
    a = a + b;
    swap(a, b);
  }

  cout << b << endl;
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
