#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    map<int,int> edge;
    for(int i = 0; i < N ; i++){
        int t;
        cin>>t;
        edge[t]++;
    }
    ll a = 0,b = 0;
    for(auto it = edge.rbegin(); it != edge.rend() ; it++){
        if(a!=0 && b!=0) break;
        if(it->second>=4){
            if(a==0)
                a = it->first;
            if(b==0)
                b = it->first;
            break;
        }
        else if(it->second>=2 && a==0){
            a = it->first;
        }
        else if(it->second>=2 && b==0){
             b = it->first;
        }
    }
    cout<<a*b<<'\n';
}