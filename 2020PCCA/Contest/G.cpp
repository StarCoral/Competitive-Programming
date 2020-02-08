#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second

const int maxN = 200005;
vector<int>g[maxN];

int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int n,k;
    cin>>n>>k;
    int a[n+5]={};
    for(int i = 1 ; i <= n ; i++){
        cin>>a[i];
        int next = min(i+a[i],n+1);
        g[next].push_back(i); //i will go to next
    }
    int ans = 0;
    queue<pair<int,int>> q;
    q.push({n+1,k});
    while(!q.empty()){
        int now = q.front().F;
        int times = q.front().S;
        q.pop();
        if(!times)break;
        for(auto i: g[now]){
            ans++;
            q.push({i,times-1});
        }
    }
    cout<<ans<<'\n';
}