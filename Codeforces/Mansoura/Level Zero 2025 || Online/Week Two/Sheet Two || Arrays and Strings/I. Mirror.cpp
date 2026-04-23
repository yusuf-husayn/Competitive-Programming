// ﷽
// Contest: Sheet Two || Arrays and Strings
// Judge: Codeforces
// URL: https://codeforces.com/group/vtfsyP8jkN/contest/594700/problem/I
// Memory Limit: 256
// Time Limit: 1000
// Start: 20/04/2026 @ 08:23:25 AM
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
  int arr[N];

  for(int i = 0; i < N; i++) cin >> arr[i];

  sort(arr, arr + N);
  int h = N / 2;

  for(int i = 0; i < h; i++) cout << arr[i] << ' ';

  for(int i = (h - 1); i >= 0; i--) cout << arr[i] << ' ';

  cout << endl;

  for(int i = (N - 1); i >= h; i--) cout << arr[i] << ' ';

  for(int i = h; i < N; i++) cout << arr[i] << ' ';

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
