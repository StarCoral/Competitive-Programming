#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define pb push_back
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        ll n,g,b;
        cin>>n>>g>>b;
        ll half=n/2,ans = 0;
        
        if(n%2==1) half++;
 
        if(g>=n){
            cout<<n<<'\n';
        }else{
            ll re = half/g, rest = half%g;
            ans = (g*re)+b*(re-1);
            //cout<<"gday: "<<g*re<<' '<<"Bday: "<<b*(re-1)<<'\n';
            if(rest>0){
                ans+=b;
                ans+=rest;
            }
            if(ans<n){
                ans = n;
            }
            cout<<ans<<'\n';
        }
    }
}