#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    int total=0;
    while(getline(cin,s)){
        if(total++) cout<<'\n';
        vector<int> sum(129,0);
        for(int i = 0 ; i < s.size() ; i++)
            sum[s[i]]++;
        vector<pair<int,int>>v;
        for(int i = 32 ; i < 128 ; i++){
            if(sum[i]){
                v.push_back({i,sum[i]});
            }
        }
        sort(v.begin(),v.end(),[](pair<int,int>a,pair<int,int>b){
            if(a.second!=b.second)
                return a.second<b.second;
            return
                a.first>b.first;                         
        });
        for(auto i:v){
            cout<<i.first<<' '<<i.second<<'\n';
        }
    }
}