#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll a,b;
    cin>>a>>b;
    ll ans = 0;
    while(a<=b){
        a*=2;
        ans++;
    }
    cout<<ans<<'\n';

}