#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int ans = 0;
    int j = 0;
    while(m--){
        if(a[j]<0)
            ans+=a[j++];
    }
    cout<<(ans*-1);
}