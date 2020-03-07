#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string s;
    cin>>s;
    int a =0,b = 0;
 
    for(auto i: s){
        if(i == 'A') a++;
        else b++;
    }
    if(a==0 || b==0) cout<<"No\n";
    else cout<<"Yes\n";
}