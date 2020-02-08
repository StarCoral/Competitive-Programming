#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int D;
        string N;
        cin>>D>>N;
        map<ll,ll> mp;      
        string A,B;
        
        while(true){
            A = N; B = N;
            sort(A.rbegin(),A.rend());
            sort(B.begin(),B.end());
  
            ll a=0,b=0;
            for(int i = 0 ; i < D ; i++){
                a =(a*10+A[i]-'0');
                b =(b*10+B[i]-'0');
            }
            ll tem = a-b;

            mp[tem]++;
            if(mp[tem]==3){
                break;
            }
            N=to_string(a-b);
            while(N.size()<D){
                N = '0'+N;
            }
        }
        ll ans =0;
        
        for(auto i: mp){
            if(i.second>=2)ans++;
        }
        cout<<ans<<'\n';
    }
}