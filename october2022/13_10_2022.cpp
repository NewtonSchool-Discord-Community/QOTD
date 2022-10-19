// https://my.newtonschool.co/playground/code/dppguwg3ntb2/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define MAX 2000000000000000009
 
int main()
{
    long long int n;
    cin >> n;
 
    long long int llX;
    cin >> llX;
 
    long long int llAns = MAX;
 
    vector<pair<long long int, long long int>> vStage(n);
 
    for (int i = 0; i < n; i++) {
        cin >> vStage[i].first >> vStage[i].second;
    }
 
    long long int llTmpSumAAndB = 0;
    long long int llTmpMinB = MAX;
 
    for (int i = 0; i < min(n, llX); i++) {
        llTmpSumAAndB += vStage[i].first + vStage[i].second;
        llTmpMinB = min(llTmpMinB, vStage[i].second);
 
        llAns = min(llAns, llTmpSumAAndB + ((llX-1) - i) * llTmpMinB);
    }
 
    cout << llAns << endl;
    return 0;
}