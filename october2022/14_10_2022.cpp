// https://my.newtonschool.co/playground/code/x5wtixl51ujk/

#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
typedef long long int ll;
typedef long double ld;
#define pll pair<ll,ll>
using namespace std;
using namespace __gnu_pbds;
 
const ll mod=998244353;
const ll inf = (ll)1e18;
const ld eps = 1e-12;
const ld PI = 3.14159265358979323846;
ll mul(ll a, ll b) { return (ll)(((a * b) % mod)+mod)%mod;}
ll add(ll &a,ll &b){return a=(a+b)%mod;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
//ll lcm(ll a,ll b){return (a*b)/gcd(a,b);}
ll powmod(ll a,ll b){ll res=1;a%=mod;assert(b>=0);for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res%mod;}
long modInverse(ll b) {return powmod(b,mod-2)%mod;}
ll compter(ll number){return (ll)log2(number)+1;}
bool isPowerOfTwo (ll x){return x && (!(x&(x-1)));}
ll countSetBits(ll n){ll cnt= 0;while (n) {cnt += n & 1;n >>= 1;}return cnt;}
template<class T> using ordered_set =tree<T, null_type, greater_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;
void debug(){cout<<"hello there"<<endl;}
ll fact[200005];
ll quick_pow(ll x,ll y){ll ans=1;while(y){if(y&1)ans=1LL*ans*x%mod;x=1LL*x*x%mod;y>>=1;}return ans;}
ll comb(ll x,ll y){return 1LL*fact[x]*quick_pow(fact[y],mod-2)%mod*quick_pow(fact[x-y],mod-2)%mod;}
 
 
void solve(){
 
 
}
 
const int N=2048;
pair<pair<int,int>,string> tree[N];
ll res,x,y;
 
void dfs(int level,int sz,string type){
 
    if(level==1){
        if(type=="red")return;
        res+=sz;
        return;
    }
    if(type=="red"){
        dfs(level,sz*x,"blue");
        dfs(level-1,sz,"red");
    }
    else{
        dfs(level-1,sz,"red");
        dfs(level-1,sz*y,"blue");
    }
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=0;
    //cin>>t;
    for(int z=0;z<t;z++){
        solve();
    }
    int n;
    cin>>n>>x>>y;
    dfs(n,1,"red");
    cout<<res<<endl;
    return 0;
}