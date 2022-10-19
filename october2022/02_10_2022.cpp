// https://my.newtonschool.co/playground/code/aqd2dimhspzg/

#include<bits/stdc++.h>
#define debug(...) std::cerr<<#__VA_ARGS__<<" : "<<__VA_ARGS__<<std::endl
 
const int maxn=200005;
 
int n,m,ans,a[maxn],vis[maxn],cnt0,cnt1;
 
void solve(std::vector<int> V) {
	if((int)V.size()==1) return;
	int only=1;
	for(int i=1;i<(int)V.size();i++) {
		if(V[0]!=V[i]) only=0;
	}
	if(only) {
		ans+=(int)V.size();
		if(V[0]) cnt1++;
		else cnt0++;
	} else ans+=(int)V.size()-1;
}
 
int main() {
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n+m;i++) {
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n+m;i++) {
		if(vis[i]) continue;
		std::vector<int> vec;
		int j=i;
		while(!vis[j]) {
			vis[j]=1;
			vec.push_back(j<=n?0:1);//Ð¡ºÚ×Ó»¹ÊÇÐ¡°××Ó
			j=a[j]; 
		}
		solve(vec);
	}
	ans+=cnt1-std::min(cnt1,cnt0)+cnt0-std::min(cnt1,cnt0);
	printf("%d\n",ans);
	return 0;
}