#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    vector<int> f(11);
    f[0] = 1;
    f[1] = 1;
    for(int i = 2 ; i <= 10 ; i++){
        f[i]=f[i-1]*i;
    }
    
    while(cin>>n){
        cout<<n<<"! = ";
        if(n==0)
            cout<<"1 = 1\n";
        for(int i = n ; i >=1 ; i--){
            cout<<i;
            if(i!=1){
                cout<<" * ";
            }
            else{
                cout<<" = "<<f[n]<<'\n';
            }
        }
    }
}