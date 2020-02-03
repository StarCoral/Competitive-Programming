#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int a[n+1],b[n+1];
    vector<int> ans;
    memset(b,0,sizeof(b));
    for(int i = 1 ; i <= n ; i++){
        cin>>a[i];
    }
    int cnt = 0;
    for(int i = n ; i>0 ; i--){
        int s = 0;
        for(int j = i ; j <= n ; j+=i){
            s += b[j];
        }
        if(s%2 != a[i]){
            b[i] = 1;
            ans.push_back(i);
        }
    }
    cout<<ans.size()<<'\n';
    for(auto i : ans){
        cout<<i<<' ';
    }
    
}