#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<ll>H(n);
    for(int i = 0; i < n ; i++){
        cin>>H[i];
    }
    sort(H.rbegin(),H.rend());
 
    
    ll ans = 0;
    for(int i = k ; i < n ; i++){
        ans+=H[i];
    }
    cout<<ans<<'\n';
}