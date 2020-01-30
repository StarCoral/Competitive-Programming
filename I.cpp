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
        vector<int> a(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        int ans = 0, minN = a[n-1];
        for(int i = n-1 ; i >= 0 ; i--){
            minN = min(minN,a[i]);
            if(a[i]>minN)
                ans++;
        }
        cout<<ans<<'\n';
    }
}