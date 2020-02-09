#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,k,mx=0;
    cin>>n>>k;
    vector<ll>p(n+5,0);
    vector<ll>sum(n+5,0);
    double ans =0;
    int from = 0;
    for(ll i = 1 ; i <= n ; i++){
        cin>>p[i];
        sum[i] = sum[i-1]+p[i];
        if(i>=k){
            ll tem = sum[i]-sum[i-k];
            if(tem>mx){
                mx = tem;
                from = i;
            }
        }
    }    
    for(ll i = from ; i > from-k ; i--){
        double t = p[i];
        ans+= ((1+t)/2.0);
    }
    cout.precision(16);
    cout<<ans<<'\n';
}

