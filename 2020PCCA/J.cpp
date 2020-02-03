#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int a,b,n,ans;
        cin>>a>>b>>n;
        int t = n%3;
        if(t == 0)
            ans = a;
        else if(t == 1)
            ans = b;
        else
            ans = a^b;
        cout<<ans<<'\n';
    }
}