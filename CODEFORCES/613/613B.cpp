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
        
        long long sum = 0,mx = 0,cur = 0;
        vector<long long> v(n);

        for(int i = 0 ; i < n ; i++){
            cin>>v[i];
            sum += v[i];
        }
        for(int i = 0 ; i < n-1 ;i++){
            cur +=v[i];
            mx = max(mx,cur);
            cur = max(cur,0LL);
        }
        cur = 0;
        for(int i = 1 ; i < n ; i++){
            cur +=v[i];
            mx = max(mx,cur);
            cur = max(cur,0LL);
        }
        if(sum>mx)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
