// https://my.newtonschool.co/playground/code/qb9irwjdjpz3/

#include <bits/stdc++.h>
using namespace std;
int main() {
        int n,x;
        string s;
        cin >> n >> x >> s;

        int ans = x;
        for (int i=0; i<n; i++){
                if (s[i]=='o')
                        ans++;

                else if (s[i]=='x' && ans>0)
                        ans--;
        }
        cout << ans << endl;
}