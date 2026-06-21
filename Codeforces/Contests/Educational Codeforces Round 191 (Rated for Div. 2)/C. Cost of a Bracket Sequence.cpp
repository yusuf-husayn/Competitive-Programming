// ﷽
// Contest: Educational Codeforces Round 191 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/2233/problem/C
// Memory Limit: 512
// Time Limit: 2000
// Start: 09/06/2026 @ 06:16:39 PM
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
  string s; cin >> s;

  vi o, c;
  for(int i = 0; i < n; i++) (s[i] == '(' ? o : c).push_back(i);

  int mn = OO;
  string res = "";

  for(int x = max(0LL, k - (int)c.size()); x <= min(k, (int)o.size()); x++){
    string curr(n, '0');
    for(int i = 0; i < x; i++) curr[o[i]] = '1';
    for(int i = 0; i < k - x; i++) curr[c[c.size() - 1 - i]] = '1';

    int cst {0}, opn {0};
    for(int i = 0; i < n; i++){
      if(curr[i] == '0'){
        if(s[i] == '(') opn++;
        else if(opn) opn--, cst += 2;
      }
    }
    if(cst < mn) mn = cst, res = curr;
  }
  cout << res << endl;
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
