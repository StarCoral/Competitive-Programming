#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    
    while(T--){
        ll A,B;
        cin>>A>>B;
        B++;
        int count =-1;
        while(B){
            count++;
            B /=10;
        }
        
        cout<<(ll)A*count<<'\n';
    }
}