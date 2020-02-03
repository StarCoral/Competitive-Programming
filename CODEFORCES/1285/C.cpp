#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll X;
    cin>>X;
    vector<ll> pf;
    if(X == 1){
        cout<<"1 1\n";
        exit(0);
    }
    for(int i = 2 ; i <= sqrt(X);i++){
        if(X%i) continue;
        ll cur = 1;
        while(X%i == 0){
            cur *= i;
            X /= i;
        }
        pf.push_back(cur);
    }
    if(X>1){
        pf.push_back(X);
    }
    ll ans1 = 1e18, ans2 = 1e18 , mx = 1e18;
    int n = pf.size();
    for(int i = 0 ;  i < (1<<n) ; i++){
        ll a = 1, b = 1;
        for(int j = 0; j < n ; j++){
            if((1<<j)&i)
                a *= pf[j];
            else
                b *= pf[j];
        }
        if(max(a,b)<mx){
            mx = max(a,b);
            ans1 = a;
            ans2 = b;
        }
    }
    cout<<ans1<<' '<<ans2<<"\n";
}
