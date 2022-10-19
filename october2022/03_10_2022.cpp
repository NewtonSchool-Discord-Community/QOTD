// https://my.newtonschool.co/playground/code/dcjthqzz07s4/

#include <iostream>

using namespace std;

int X;
int a, b, r;

int main()
{

    cin >> X;

    a = X / 500;
    r = X % 500;

    if(r == 0){

        cout << (1000 * a) << endl;

    }else{

        b = r / 5;


            cout << (1000 * a) + (5 * b);





    }





    return 0;
}
