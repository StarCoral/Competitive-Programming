#include<bits/stdc++.h>
using namespace std;
#define LL long long

int main(){
    int n;
    cin>>n;
    while(n--){
        int c,s;
        cin>>c>>s;
        int ans = 0;
        if(s%c == 0){
            ans = s*s/c; // (s/c)^2*c
        }else{
            int di = s/c;
            int cnt = s%c;
            while(cnt){
                ans+=(di+1)*(di+1);
                cnt--;
            }
            ans += di*di*(c-(s%c));
        }      
        cout<<ans<<'\n';
    }
}