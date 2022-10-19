// https://my.newtonschool.co/playground/code/l9j3uybneyf9/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,d;
  double x,y;
  cin >> a >> b >> d;
  
  x=a*cos(d * M_PI / 180)-b*sin(d * M_PI / 180);
  y=a*sin(d * M_PI / 180)+b*cos(d * M_PI / 180);
  cout << setprecision(10) << x << " " << y;
  
  
}