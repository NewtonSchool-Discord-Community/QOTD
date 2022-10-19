// https://my.newtonschool.co/playground/code/hxdlpvihbrqv/
#include<bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 1e9 + 7;

signed main(){
    int n, q;
    cin >> n >> q;
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        string s;
        int p;
        cin >> s >> p;
        string t = "";
        for(int j = 0; j < s.size(); j++){
            t += s[j];
            (mp[t] += p) %= MOD;
        }
    }
    for(int i = 0; i < q; i++){
        string s;
        cin >> s;
        cout << mp[s];
        if(i != q - 1) cout << endl;
    }
}