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
        string s="";
        int t = n%2;
        if(t==0){
            for(int i = 0 ; i < n/2 ; i++){
                s+='1';
            }
        }
        else{
            s = '7';
            for(int i = 0 ; i < n/2-1 ; i++){
                s+='1';
            }
        }
        
        
        cout<<s<<'\n';
    }   
}