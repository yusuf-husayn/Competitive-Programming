// ﷽
// Contest: Sheet Three || Time Complexity - Functions - Structs
// Judge: Codeforces
// URL: https://codeforces.com/group/vtfsyP8jkN/contest/596491/problem/O
// Memory Limit: 256
// Time Limit: 2000
// Start: 03/05/2026 @ 08:02:43 AM
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
struct Juice{
  int Vi, Li;
};

bool cmf(Juice a, Juice b){
  return ((double)a.Vi / a.Li) > ((double)b.Vi / b. Li);
}
void solve() {
  int N, L; cin >> N >> L;

  vector<Juice> j(N);

  for(int i = 0; i < N; i++) cin >> j[i].Vi >> j[i].Li;

  sort(all(j), cmf);

  double cnt{0.0};
  for(int i = 0; i < N && L != 0; i++){
    if(L >= j[i].Li) cnt += j[i].Vi, L -= j[i].Li;

    else {
      double rem = (double)j[i].Vi / j[i].Li;
      cnt += L * rem, L = 0;
    }
  }
  cout << fixed << setprecision(6) << cnt << endl;
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
