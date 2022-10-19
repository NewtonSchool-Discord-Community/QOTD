// https://my.newtonschool.co/playground/code/1dz40w4vv0oh/

#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main(){
    int N;
    cin >> N;
    vector<int> a(N), b(N);
    for (int i = 0; i < N; i++){
        cin >> a[i];
    }
    for (int i = 0; i < N; i++){
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    vector<int> ans;
    int x;
    for (int i = 0; i < N; i++){
        if (i != 0 && b[i - 1] == b[i]){
            continue;
        }
        x = a[0] ^ b[i];
        vector<int> c;
        for (int j = 0; j < N; j++){
            c.push_back(a[j] ^ x);
        }
        sort(c.begin(), c.end());
        int good = 1;
        for (int j = 0; j < N; j++){
            if (b[j] != c[j]){
                good = 0;
                break;
            }
        }
        if (good){
            ans.push_back(x);
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << "\n";
    }
}