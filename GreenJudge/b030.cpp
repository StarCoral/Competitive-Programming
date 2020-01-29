#include<algorithm>
#include<iostream>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cstring>
using namespace std;
#define ll long long int

int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int n,m;
    cin>>n>>m;
    int L[n],S[n];
    for(int i = 0 ; i < n ; i++){
        cin>>L[i]>>S[i];
    }
   
    int dp[n+1][m+1];
     
    memset(dp, 0, sizeof(dp));

    for(int i = 0 ; i < n ; i++){ //窮舉每種物品
        for(int j = 0 ; j <= m ; j++){ //窮舉每種重量
            if(j-L[i] < 0)
                dp[i+1][j] = dp[i][j];
            else{
                dp[i+1][j] = max(dp[i][j],dp[i][j-L[i]]+S[i]);
            }
        }
    }
    cout<<dp[n][m];
}