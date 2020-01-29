#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll h;
    cin>>h;
    if(h==1)
        cout<<1<<'\n';
    else{
        ll ans = 0,i=0;
        while(ans<h)
        {
            ans+=pow(2,i++);
        }
        cout<<ans<<'\n';
    }
    
}