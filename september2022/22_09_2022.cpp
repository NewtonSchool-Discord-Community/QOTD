// https://my.newtonschool.co/playground/code/pz4jicbs4n7f/
#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2){
            ans = 0;
            break;
        }
        a[i] /= 2;
        while(a[i] % 2 == 0){
            ans++;
            a[i] /= 2;
        }
    }
    cout << ans;
}