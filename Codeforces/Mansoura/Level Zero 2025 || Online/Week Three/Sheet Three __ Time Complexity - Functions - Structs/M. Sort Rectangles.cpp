// ﷽
// Contest: Sheet Three || Time Complexity - Functions - Structs
// Judge: Codeforces
// URL: https://codeforces.com/group/vtfsyP8jkN/contest/596491/problem/M
// Memory Limit: 256
// Time Limit: 1000
// Start: 29/04/2026 @ 01:02:04 PM
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
struct Rectangle{
  int idx, area;
};

bool cmf(Rectangle f, Rectangle s){
  return f.area < s.area;
}
void solve() {
  int n; cin >> n;
  Rectangle arr[n];

  for(int i = 0; i < n; i++){
    int X1, Y1, X2, Y2, X3, Y3, X4, Y4; cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;

    int max_X = max({X1, X2, X3, X4});
    int min_X = min({X1, X2, X3, X4});
    int max_Y = max({Y1, Y2, Y3, Y4});
    int min_Y = min({Y1, Y2, Y3, Y4});

    int length = max_X - min_X, width = max_Y - min_Y;

    int area = length * width;

    arr[i] = {i + 1, area};
  }

  sort(arr, arr + n, cmf);

  for(int i = 0; i < n; i++){
    cout << arr[i].idx << ' ' << arr[i].area << endl;
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
