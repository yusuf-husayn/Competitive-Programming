// ﷽
// Contest: Order Capital Round 2 (Codeforces Round 1104, Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2237/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: 18/06/2026 @ 05:36:01 PM
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
  vi a(n); cin >> a;

  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      if(a[j] > a[i]){
        a[j] = a[i];
        break;
      }
    }
  }
  int sm {0};
  for(int x : a) sm += x;
  cout << sm << endl;
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
