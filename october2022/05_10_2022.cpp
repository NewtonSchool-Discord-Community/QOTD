// https://my.newtonschool.co/playground/code/xkdfdk6933bo/

#include <iostream>
using namespace std;
int main()
    {
        int a,b,c,d,sum1,sum2;
        cin >> a >> b >> c >> d;
        sum1= c-b;
        sum2 = a-d;
        if(sum1 <= 0)
            cout <<"Yes";
        else if(sum2 <= 0)
            cout << "No";


        while (sum1>0 && sum2 >0)
        {
            sum1 -= b;
            if(sum1 <= 0)
            {
               cout <<"Yes";
                break;
            }

            sum2 -= d;
            if(sum2 <= 0)
            {
                cout << "No";
                break;
            }



        }

    }