#include<bits/stdc++.h>
using namespace std;

struct edge
{
    int x,y;
    int cost;
};

bool cmp(edge x, edge y){
    return x.cost < y.cost;
}

int d[10005];
int Find(int x){
    return d[x] == x? x: d[x] =Find(d[x]);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    while(cin>>n>>m && n){
        vector<edge>v;
        for(int i = 0 ; i < m ; i++){
            int x,y,c;
            cin>>x>>y>>c;
            v.push_back({x,y,c});
        }
        sort(v.begin(),v.end(),cmp);
        for(int i = 1 ; i <= n; i++){
            d[i]=i;
        }
        int ans =0;
        int left = n-1;
        for(auto i:v){
            int g1 = Find(i.x);
            int g2 = Find(i.y);
            if(g1==g2)continue;
            ans+= i.cost;
            d[g1] = g2;
            left --;
        }
        if(left)
            cout<<-1<<'\n';
        else
            cout<<ans<<'\n';

    }
}