#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int H,N;
    cin>>H>>N;
    int A[N],B[N];
    const int inf = 1e9;
    vector<int> dp(H+1,inf);
    dp[0]=0;
    for(int i = 0 ; i < N ; i++){
         cin>>A[i]>>B[i];
         for(int j = 0 ; j <= H ; j++){
             dp[min(j+A[i],H)] = min(dp[min(j+A[i],H)],dp[j]+B[i]);
         }
    }
   cout<<dp[H];
}