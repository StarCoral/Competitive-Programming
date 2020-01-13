#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,ans =0;
    string s;
    cin>>n>>s;
    
    for(int i = 0 ; i <= n ; i+=2){
        if((s[i] == 'a' && s[i+1] =='a')){
            s[i] = 'b';
            ans++;
        }
        if((s[i] == 'b' && s[i+1] == 'b')){
            s[i] = 'a';
            ans++;
        }
    }
    cout<<ans<<"\n"<<s<<"\n";
    
    return 0;
}