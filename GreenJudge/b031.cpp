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
    cin>>n>>m; //n 為餐廰的食物有幾種，m 為小筑的食量
    int L[n],S[n]; // L 為該食物的份量，S 為該食物的價值
    for(int i = 0 ; i < n ; i++){
        cin>>L[i]>>S[i];
    }
   
    int dp[m+1];
     
    memset(dp, 0, sizeof(dp));

    for(int i = 0 ; i < n ; i++){ //窮舉每種食物
        for(int j = L[i] ; j <= m ; j++){ //窮舉每種份量
            dp[j] = max(dp[j],dp[j-L[i]]+S[i]);
        }
    }
    cout<<dp[m];
}