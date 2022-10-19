// https://my.newtonschool.co/playground/code/8irq5ds05iv0/

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define MAX 100005

bool comp(string &a, string &b){
    ll cnt = 0;
    ll ans = 0;
    for(auto i: a) {
        if(i == 'x') cnt++;
        else {
            ans += cnt;
        }
    }
    for(auto i: b) {
        if(i == 'x') cnt++;
        else {
            ans += cnt;
        }
    }
    cnt = 0;
    ll ans1 = 0;
    for(auto i: b) {
        if(i == 'x') cnt++;
        else {
            ans1 += cnt;
        }
    }
    for(auto i: a) {
        if(i == 'x') cnt++;
        else {
            ans1 += cnt;
        }
    }
    if(ans <= ans1) return false;
    return true;
    
}
int main(){
    int n; 
    cin >> n;
    vector<string> v(n);
    for(auto &i: v) cin >> i;
    sort(v.begin(), v.end(), comp);
    ll cnt = 0;
    ll ans = 0;
    for(auto i: v) {
        for(auto j: i) {
            if(j == 'x') cnt++;
            else ans += cnt;
        }
    }
    cout << ans;
}