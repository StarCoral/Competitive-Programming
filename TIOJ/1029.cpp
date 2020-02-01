#include<bits/stdc++.h>
using namespace std;
  
int n, s, dp[1005][1005];
  
int main() {
    cin >> n;
    for (int i = 2; i < n+2; i++){
        cin >> dp[i][i];
        s += dp[i][i];
        for (int j = i-1; j >= 2; j--){
            dp[j][i] = max(dp[j][j] + min(dp[j+1][i-1], dp[j+2][i]),
                          dp[i][i] + min(dp[j][i-2], dp[j+1][i-1]));
        }
    }
    int ans = dp[2][n+1];
    cout<<ans<<' '<<s-ans<<'\n';
}