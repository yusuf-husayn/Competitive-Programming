// ﷽
// Contest: Contest 3
// Judge: Codeforces
// URL: https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/G
// Memory Limit: 512
// Time Limit: 2000
// Start: 05/05/2026 @ 04:27:36 PM
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
struct Book{
  string ttl;
  int idx;
};
bool cmf(const Book& a, const Book& b){
  for(int i = 0; i < (int)a.ttl.size(); i++){
    if(a.ttl[i] != b.ttl[i]) return (i % 2 == 0) ? (a.ttl[i] < b.ttl[i]) : (a.ttl[i] > b.ttl[i]);
  }
  return false;
}
void solve() {
  int n, m; cin >> n >> m;
  vector<Book> arr(n);

  for(int i = 0; i < n; i++) {
    cin >> arr[i].ttl;
    arr[i].idx = i + 1;
  }
  sort(all(arr), cmf);

  for(int i = 0; i < n; i++) cout << arr[i].idx << ' ';
  cout << endl;

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
