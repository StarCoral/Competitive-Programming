#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    map<int,int> mp;
    cin.ignore();
    while(T--){
        string s;
        getline(cin,s);
        
        for(int i = 0 ; i < s.size(); i++){
            if(s[i]>='A' && s[i]<='Z')
                mp[s[i]-'A']++;
            else if(s[i]>='a' && s[i]<='z')
                mp[s[i]-'a']++;
        }
    } 
    vector<pair<char,int>>v;
    for(auto i : mp){
        v.pb({i.first+'A',i.second});
    }
    sort(v.begin(),v.end(),[](pair<char,int>a,pair<char,int>b){
        if(a.second!=b.second)
            return a.second>b.second;
        return a.first<b.first;
    });

    for(auto i: v){
        cout<<i.first<<' '<<i.second<<'\n';
    }
}