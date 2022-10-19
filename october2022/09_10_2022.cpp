// https://my.newtonschool.co/playground/code/4ua93dhq0n4l/

#include<cstdio>
#include<cstring>
using namespace std;
char s1[200010],s2[200010];
int len1,len2,p=1,ok=1,t,k,l1,l2;
int main(){
	scanf("%s%s",s1+1,s2+1);
	len1=strlen(s1+1),len2=strlen(s2+1);
	for(int i=1;i<=len1;){
		t=i;
		while(t<len1 && s1[t]==s1[t+1])	++t;
		k=p;
		while(k<len2 && s2[k]==s2[k+1])	++k;
		if(s1[i]!=s2[p]) ok=0;
		l1=t-i+1,l2=k-p+1;
		if(l1!=l2 && (l1>l2 || (l1<l2 && l1==1))) ok=0;
		i=t+1;
		p=k+1;
	}
	if(p-1 != len2)	ok=0;
	if(ok)	printf("Yes\n");
	else printf("No\n");
	return 0;
}