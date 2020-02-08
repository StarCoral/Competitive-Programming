#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int>pq(n);
        for(int i = 0 ; i < n ;i++){
            cin>>pq[i];
        }
        
        sort(pq.rbegin(),pq.rend());
        int ans=0;
        for(int i = 2 ; i < n ; i+=3){
            ans+=pq[i];
        }
        cout<<ans<<'\n';
    }
}