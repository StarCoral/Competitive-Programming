#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        multiset<long long>ms;
        for(int i = 0 ; i < n ; i++){
            int t;
            cin>>t;
            ms.insert(t);
        }
        for(int i = 0 ; i < 11 ; i++){
            
            long long num = ms.erase(1<<i);
            long long t = num/2;
            long long mod = num%2;
            while(mod--){
                ms.insert(1<<i);
            }
            while(t--){
                ms.insert((1<<i)*2);
            }
        }
        if(ms.find(2048)!=ms.end()){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }   
    }
    return 0;
}