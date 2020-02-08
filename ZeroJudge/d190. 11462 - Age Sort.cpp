#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    while(cin>>n && n != 0){
        priority_queue<int,vector<int>,greater<int>> pq;
        int q;
        for(int i = 0 ; i < n ; i++){
            cin>>q;
            pq.push(q);
        }
        for(int i = 0 ; i < n ; i++){
            cout<<pq.top();
            if(i!=n-1) cout<<' ';
            pq.pop();
        }
        cout<<'\n';
    }
}