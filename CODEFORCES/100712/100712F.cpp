#include<bits/stdc++.h>
using namespace std;

struct edge{
    int x,y;
    int c;
};
bool cmp(edge x,edge y){
    return x.c < y.c;
}

int d[100005];

int find(int x){
    return d[x] == x? x: d[x]=find(d[x]);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N,M;
        cin>>N>>M;
        vector<edge> v;
        for(int i = 0 ; i < M ; i++){
            int x,y,c;
            cin>>x>>y>>c;
            v.push_back({x,y,c});
        }
        sort(v.begin(),v.end(),cmp);
        for(int i = 1 ; i <= N ; i++){
            d[i] = i;
        }
        int ans =0;
        for(auto i:v){
            int g1 = find(i.x);
            int g2 = find(i.y);
            if(g1!=g2){
                d[g1] = g2;
                ans = max(ans,i.c);
            } 
        }
        cout<<ans<<'\n';
    }
}