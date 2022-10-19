// https://my.newtonschool.co/playground/code/ltx9xtqrqaw4/    
    
    #include <bits/stdc++.h>
    #define int long long
    using namespace std;
    vector<int> f(int n){
        vector<int> a={};
        for(int i=1;i<floor(sqrt(n))+1;i++){
            if(n%i==0){
                a.push_back(i);
                a.push_back(n/i);
            }
        }
        return a;
    }
    int score(int a,int b){
        int Min=min(a,b);
        int Max=max(a,b);
        while(Min){
            int temp=Min;
            Min=Max%Min;
            Max=temp;
        }
        return a*b/Max;
    }
    signed main() {
        ios::sync_with_stdio(false);cin.tie(0);
        int n;
        cin>>n;
        int arr[n];
        int brr[n];
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            arr[i]=a;
            brr[i]=b;
        }
        vector<int> aa=f(arr[0]);
        vector<int> bb=f(brr[0]);
        vector<pair<int,int>> candidate={};
        for(int i=0;i<aa.size();i++){
            for(int j=0;j<bb.size();j++){
                int tag=1;
                
                for(int k=0;k<n;k++){
                    if(arr[k]%aa[i]==0 and brr[k]%bb[j]==0) continue;
                    if(arr[k]%bb[j]==0 and brr[k]%aa[i]==0) continue;
                    tag=0;
                }
                if(tag) candidate.push_back(make_pair(aa[i],bb[j]));
            }
        }
        int Max=0;
        //cout<<candidate.size();
        for(auto i=candidate.begin();i!=candidate.end();++i){
            //cout<<i->first<<" "<<i->second;
            Max=max(Max,score(i->first,i->second));
        }
        cout<<Max;
    }