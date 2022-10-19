// https://my.newtonschool.co/playground/code/jpzljel230hu/

#include<bits/stdc++.h>
using namespace std;
#define int long long
 
signed main(){
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    int mx = max({a, b, c});
    while((3*mx - sum)%2) mx++;
    int res = 0;
    res += mx - a;
    res += mx - b;
    res += mx - c;
    cout << res/2;
}
