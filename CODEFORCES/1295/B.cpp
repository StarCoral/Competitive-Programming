#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
      int n,x;
      cin>>n>>x;
      string s;
      cin>>s;
      vector<int> p(n+1,0);
      p[0]=0;
      for(int i = 0 ; i < n ; i++){
        if(s[i]=='0'){
          p[i+1]=p[i]+1;
        }
        else{
         p[i+1]=p[i]-1;
        }
      }
      if(p[n]==0){
        bool ok = false;
        for(int i = 0 ; i < n ; i++){
          if(p[i]==x){
            cout<<"-1\n";
            ok=true;
            break;
          }
        }
        if(!ok)
          cout<<"0\n";
      }
      else{
        int ans = 0; 
        for(int i = 0 ; i < n ; i++){
          int del = x - p[i];
          if(del%p[n] == 0 && del/p[n]>=0)
            ans++;
        }
        cout<<ans<<'\n';
      }
    }
}