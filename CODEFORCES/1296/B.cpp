#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int s;
        cin>>s;
        int x,y,ans = 0;
        while(s>=10){
            y = s;
            y /= 10;
            x = y*10;
            ans +=x;
            s = s-x+y;
        }
        ans+=s;
        cout<<ans<<'\n';
    }
}