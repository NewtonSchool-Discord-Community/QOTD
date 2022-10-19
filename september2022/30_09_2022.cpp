// https://my.newtonschool.co/playground/code/gefdgmn5wavy/    
    
    #include <bits/stdc++.h>
     
    using namespace std;
     
    long long modc=998244353;
     
    int main(){
     
        long long N, K, ans=1, k;
        char c;
        cin >> N >> K;
        vector<bool> used(N+1);
        vector<long long> cnt(N+2);
     
        for (int i=0; i<K; i++){
            cin >> c >> k;
            if (c == 'R'){
                cnt[1]++; cnt[k+1]--;
            }
            else{
                cnt[k]++; cnt[N+1]--;
            }
            used[k] = 1;
        }
     
        for (int i=1; i<=N; i++){
            cnt[i] += cnt[i-1];
            ans *= (used[i] ? 1 : cnt[i]);
            ans %= modc;
        }
     
        cout << ans << endl;
     
        return 0;
    }