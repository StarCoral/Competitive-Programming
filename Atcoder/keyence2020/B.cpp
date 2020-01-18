#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    vector<pair<int,int>>v;
    for(int i = 0 ; i < N ; i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a-b,a+b});
    }
    sort(v.begin(),v.end(),[](pair<int,int> a , pair<int,int>b){
        return a.second<b.second;
    });

    int last = -1e9;
    int ans = 0;
    for(auto i : v){
        if(i.first>=last){
            last = i.second;
            ans++;
        }
    }
    cout<<ans<<'\n';
}