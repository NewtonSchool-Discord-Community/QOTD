// https://my.newtonschool.co/playground/code/5oy9dbxuqsy5/

#include <bits/stdc++.h>

using i64 = long long;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n, c;
    std::cin >> n >> c;
    
    int A = (1 << 30) - 1, O = 0, X = 0;
    for (int i = 0; i < n; i++) {
        int t, x;
        std::cin >> t >> x;
        
        if (t == 1) {
            A &= x;
            O &= x;
            X &= x;
        } else if (t == 2) {
            A |= x;
            O |= x;
            X &= ~x;
        } else {
            int t = x & (~A | O);
            A ^= t;
            O ^= t;
            X ^= x ^ t;
        }
        
        c = ((c & A) | O) ^ X;
        std::cout << c << "\n";
    }
    
    return 0;
}
