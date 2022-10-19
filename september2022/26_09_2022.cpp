// https://my.newtonschool.co/playground/code/ebpcbpjye9g8/

#include <iostream>
using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int x, p, q;
        cin >> x >> p >> q;
        int ans = (p - q) * x;
        cout << ans << endl;
    }
    // your code goes here
    return 0;
}
