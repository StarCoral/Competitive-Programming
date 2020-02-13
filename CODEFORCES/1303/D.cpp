#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define pb push_back
 
int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        ll n, m ,all = 0;
        cin>>n>>m;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i = 0 ; i < m ; i++){
            ll tem;
            cin>>tem;
            all+=tem;
            
            int cnt = -1;
            while(tem){
                cnt++;
                tem/=2;
            }
            pq.push(cnt);
        }
        ll sub = all - n;
        if(all<n){
            cout<<"-1\n";
        }else{
            int ans = 0;
            for(int i = 0 ; i <=60 ; i++){ // 10^18
                if(sub&(1ll<<i)){
                    int now=pq.top();
                    pq.pop();
                    ans+=now-i;
                    for(int j = i+1 ; j < now ; j++){
                        pq.push(j);
                    }
                }
                int nt = 0;
                while(pq.top()==i){
                    nt++;
                    if(!pq.empty())
                        pq.pop();
                    else
                        break;
                }
                nt/=2;

                while(nt--)
                    pq.push(i+1);
                
            }
            cout<<ans<<'\n';
        }
    }
}