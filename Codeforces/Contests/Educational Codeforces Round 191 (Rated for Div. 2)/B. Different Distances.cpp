// ﷽
// Contest: Educational Codeforces Round 191 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2233/problem/B
// Memory Limit: 512
// Time Limit: 2000
// Start: 09/06/2026 @ 05:42:30 PM
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
  vi b1(n), b2(n), b3(n), b4(n);

  for(int i = 0; i < n; i++){
    b1[i] = i + 1;
    b3[i] = i + 1;
    b4[i] = i + 1;
    b2[i] = n - i;
  }

  if(n % 2 != 0){
    int m = (n + 1) / 2;

    swap(b2[n - m], b2[n - m + 1]);
  }

  for(int x : b1) cout << x << ' ';
  for(int x : b2) cout << x << ' ';
  for(int x : b3) cout << x << ' ';
  for(int x : b4) cout << x << ' ';
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
