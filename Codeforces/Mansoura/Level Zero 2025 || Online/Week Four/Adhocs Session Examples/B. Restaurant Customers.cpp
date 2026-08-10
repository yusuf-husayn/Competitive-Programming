// ﷽
// Contest: Adhocs Session Examples
// Judge: Codeforces
// URL: https://codeforces.com/gym/517439/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: 10/08/2026 @ 08:59:06 AM
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
  int arr[100005] {};
  while(n--){
    int a, b; cin >> a >> b;
    arr[a]++, arr[b + 1]--;
  }

  for(int i = 1; i <= 100000; i++) arr[i] += arr[i - 1];

  int mx{0};
  for(int i = 1; i <= 100000; i++) mx = max(mx, arr[i]);
  cout << mx << endl;
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
