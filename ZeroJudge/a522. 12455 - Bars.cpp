#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int n,p;
        cin>>n>>p;
        int a[p];
        for(int i = 0 ; i < p ; i++)
            cin>>a[i];
        vector<int> dp(n+1,0);
        dp[0]=0;
        for(int i = 0 ; i < p ; i++){ // 每個金屬棒
            for(int j = n ; j-a[i]>=0 ; j--){
                dp[j] = max(dp[j],dp[j-a[i]]+a[i]);
            }
        }
        //cout<<dp[n]<<'\n';
        if(dp[n]==n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}