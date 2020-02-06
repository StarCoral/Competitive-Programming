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
        vector<pair<int,int>> p;
        for(int i = 0 ; i < n ; i++){
            int a,b;
            cin>>a>>b;
            p.push_back({a,b});
        } 
        sort(p.begin(),p.end());
        string ans = "";
        int x = 0, y = 0;
        bool is = true;
        for(auto i : p){
            if(i.first < x || i.second < y){
                is = false;
            }
            for(int j = x ; j < i.first ; j++){
                ans += 'R';
                x++;
            }
            for(int k  = y ; k < i.second ; k++){
                ans += 'U';
                y++;
            }
        }
        if(!is){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n"<<ans<<'\n';
        }
    }
}