#include<bits/stdc++.h>
using namespace std;
struct ed{
    int S,D,C;
};

bool cmp(ed a,ed b){
    return a.C <b.C;
}
int N,M;
int d[505];
int vis[50005];
vector<ed>v;
int find(int x){
    return d[x] == x? x : d[x] = find(d[x]);
}

int kruskal(int c){
    int ans = 0; 
    int num = 0;
    for(int i = 1 ; i<=N ;i++)
        d[i]=i;
    for(int i = 0 ; i<M ; i++){
        if(i==c) continue;
        int g1 = find(v[i].S);
        int g2 = find(v[i].D);
        if(g1!=g2){
            num++;
            vis[i]=1;
            ans += v[i].C;
            d[g1] = g2;
        }
        if(num==N-1) break;
    }
    if(num!=N-1) return -1;
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>N>>M;
    
    for(int i = 0 ; i < M ; i++){
        int s,d,c;
        cin>>s>>d>>c;
        v.push_back({s,d,c});
    }
    sort(v.begin(),v.end(),cmp);
    int temp = kruskal(M);
    int ans1 =0,ans2=0;
    for(int i = 0 ;i < M ; i++){
        if(!vis[i]) continue;
        if(temp != kruskal(i)){
            ans1++;
            ans2+=v[i].C;
        }
    }
    cout<<ans1<<' '<<ans2<<'\n';
}