// https://my.newtonschool.co/playground/code/cdgwehff31dh/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
	cin >> n;
    vector<int> A(n + 1), B(n + 1);
	for(int i = 1; i <= n; i++)
        cin >> A[i];
	int head = 1, tail = n;
	int f = 0, k = n;
	while(head <= tail){
		if(f == 0) B[head++] = A[k--];
		else B[tail--] = A[k--];
		f ^= 1;
	}
	for(int i = 1; i < n; i++)
        cout << B[i] << ' ';
	printf("%d",B[n]);
}