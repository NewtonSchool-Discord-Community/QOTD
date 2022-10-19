// https://my.newtonschool.co/playground/code/g1p62us785vn/

#include <bits/stdc++.h>
using namespace std;

#define FOR(i,s,e) for(int i=(s);(i)<(int)(e);++(i))
#define REP(i,e) FOR(i,0,e)

using ll = long long;
using VI = vector<int>;
using VI2 = vector<VI>;
using VL = vector<ll>;
using VL2 = vector<VL>;
using VD = vector<double>;
using VLD = vector<long double>;
using TII = tuple<int,int>;

void solve() {
  int n, m; cin >> n >> m;    
  VI a(n), b(n);
  VI2 ids(m+1, VI());
  REP(i,n) {
    cin >> a[i] >> b[i];
    ids[a[i]].push_back(i);
    ids[b[i]].push_back(i);
  }
  VI c(n), res(m+3);
  int s = 0, u = 1;
  FOR(l,1,m+1) {
    while (u <= m && s < n) {
      int ni = ids[u].size();
      REP(i,ni) {
        int x = ids[u][i];
        if (c[x] == 0) s++;
        c[x]++;
      }
      u++;
    }
    if (s < n) break;
    res[u-l]++;
    res[m-l+2]--;
    int ni = ids[l].size();
    REP(i,ni) {
      int x = ids[l][i];
      c[x]--;
      if (c[x] == 0) s--;
    }
  }
  FOR(i,1,m+1) res[i] += res[i-1];
  FOR(i,1,m) cout << res[i] << ' ';
  cout << res[m] << endl;
}

int main() {
  cin.tie(0);
  cout << fixed << setprecision(10);
  ios::sync_with_stdio(false);
  solve();
  return 0;
}
