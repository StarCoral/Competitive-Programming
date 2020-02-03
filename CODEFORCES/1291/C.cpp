#include<bits/stdc++.h>
using namespace std;
 
int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int n,m,k;
        cin>>n>>m>>k;
        int a[n];
        for(int i = 0 ; i < n ; i++)
            cin>>a[i];
        k = min(k,m-1);
        int ans = 0 ;
        for(int i = 0 ; i <= k ; i++){
            int left = i , right = i + n - k;
            int tem = 1e9+7;
            for(int j = left ; j <= right-(n-m+1) ; j++){
                tem = min(tem,max(a[j],a[j+n-m]));
            }
            ans = max(ans,tem);
        }
        cout<<ans<<'\n';
    }
  
}