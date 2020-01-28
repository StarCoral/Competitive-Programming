#include<algorithm>
#include<iostream>
#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int h,w;
    cin>>h>>w;
    int s[h+1][w+1],dp[h+1][w+1];
    for(int i = 0 ; i < h ; i++){
        for(int j = 0 ; j <w ; j++){
            cin>>s[i][j];
            dp[i][j]=1-s[i][j];
        }
    }
    //以右下的點作為考量，若為正方形則上、左、左上皆為1
    int side = 0;
    for(int i = 1 ; i < h ; i++){
        for(int j = 1 ; j < w ; j++){
            if(dp[i-1][j-1]>=1 && dp[i][j] == 1){
                dp[i][j] = min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]))+1;
                side = max(side,dp[i][j]);
            }
        }
    }
    cout<<side*side;
}