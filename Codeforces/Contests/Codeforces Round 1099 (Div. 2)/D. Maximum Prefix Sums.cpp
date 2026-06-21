// ﷽
// Contest: Codeforces Round 1099 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2231/problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: 21/05/2026 @ 06:08:56 PM
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
  string s; cin >> s;
  vi a(n), b(n); cin >> a >> b;

  vi c = b;
  for(int i = n - 1; i > 0; i--){
    if(s[i] == '1') c[i - 1] = min(c[i - 1], c[i] - a[i]);
  }

  int sm {0}, mx = - OO;
  for(int i = 0; i < n; i++){
    int di;
    if(s[i] == '1') di = sm + a[i];
    else{
      if(i == 0 || b[i] > b[i - 1]) di = b[i];
      else di = c[i];

      a[i] = di - sm;
  }

    sm = di, mx = max(mx, sm);

    if(mx != b[i]) return void(cout << "NO" << endl);
  }
  cout << "YES" << endl << a << endl;
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
