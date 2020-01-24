#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q,x;
    cin>>q>>x;
    int y[400005],ans = 0;
    memset(y,0,sizeof(y));

    while(q--){
        int n;
        cin>>n;
        y[n%x]++;
        while(y[ans%x]){
            y[ans%x]--;
            ans++;
        }
        cout<<ans<<'\n';
    }
}