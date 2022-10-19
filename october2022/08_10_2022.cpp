// https://my.newtonschool.co/playground/code/st7l8spbrzix/

#include <iostream>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    string S, T;
    cin >> S >> T;
    int a, b;
    cin >> a >> b;
    string u;
    cin >> u;
 
    if (u == S)
        --a;
    else
        --b;
 
    cout << a << " " << b << endl;
    return 0;
}