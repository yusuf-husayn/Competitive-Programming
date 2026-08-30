// ﷽
// Contest: Asu Coding Cup 4
// Judge: Codeforces
// URL: https://codeforces.com/gym/102397/problem/G
// Memory Limit: 1024
// Time Limit: 1500
// Start: 30/08/2026 @ 06:38:28 AM
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
  int n, k; cin >> n >> k;
  vector<int> freqa(1e5 + 5 , 0),freqb(1e5 + 5 , 0);
  int numa {0}, numb {0};

  for (int i = 0; i < n; i++){
    int x; cin >> x;
    if(k - x >= 0 && k - x <= 100000) numa += freqa[k - x];
    if(x <= 100000) freqa[x]++;
  }

  for (int i = 0; i < n; i++){
    int x; cin >> x;
    if(k - x >= 0 && k - x <= 100000) numb += freqb[k - x];
    if(x <= 100000) freqb[x]++;
  }

  if (numa > numb) cout << "MAHMOUD" << endl;
  else if (numa < numb) cout << "BASHAR" << endl;
  else cout << "DRAW" << endl;
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
