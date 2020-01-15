#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        ll n,d;
        cin>>n>>d;
        if(n>=d)
            cout<<"YES\n";
        else{
            bool OK = false;
            for(int i = 1 ; i < n ; i++){
                int t = i+ ceil(((double)d/(double)(i+1)));
                if(t<=n){
                    OK =true;
                    break;
                }
            }
            if(OK)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
}