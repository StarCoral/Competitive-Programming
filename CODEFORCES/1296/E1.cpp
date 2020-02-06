#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; 
    string s;
    cin>>n>>s;
    string ans ="";
    char x='a', y='a';
    for(int i = 0; i < n ; i++){
        if(s[i]>=x){
            ans+='1';
            x = s[i];
        }else if(s[i]>=y){
            ans+='0';
            y = s[i];
        }else{
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n"<<ans<<'\n';
}