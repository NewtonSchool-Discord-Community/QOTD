// https://my.newtonschool.co/playground/code/ny4nr7vbz7tq/   
   
    #include <bits/stdc++.h>
    using namespace std;
    #define rep(i,n) for(int i=0; i<(n); i++)
    #define INF ((1LL<<62)-(1LL<<31))
    #define all(a)  (a).begin(),(a).end()
    #define rall(a)  (a).rbegin(),(a).rend()
    typedef long long ll;
    typedef pair<ll,ll> pl;
     
    int main() {
        int k,n;
        cin >> k >> n;
        vector<int> a(n);
        rep(i,n) cin >> a[i];
        a.push_back(a[0]+k);
        int ma=0;
        rep(i,n) ma=max(ma,a[i+1]-a[i]);
        cout << k-ma << endl;
        return 0;
    }
