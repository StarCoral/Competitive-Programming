#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,q;
    cin>>n>>q;
    vector<vector<int>>mz(2,vector<int>(n+5,0));
    
    int cnt = 0;
    for(int i = 0 ; i < q ; i++){
        int x,y;
        cin>>x>>y;
        x--; 
        mz[x][y]^=1;
        if(mz[x][y]){
            if(mz[x^1][y+1]) cnt++;
            if(mz[x^1][y])   cnt++;
            if(mz[x^1][y-1]) cnt++;
        }else{
            if(mz[x^1][y+1]) cnt--;
            if(mz[x^1][y])   cnt--;
            if(mz[x^1][y-1]) cnt--;
        }
        if(!cnt)
            cout<<"Yes\n";
        else
            cout<<"No\n";

    }
}