#include<bits/stdc++.h>
using namespace std;

int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        string s,t;
        cin>>s>>t;
        vector<int>p[26];
        for(int i = 0 ; i < s.size() ; i++)
            p[s[i] - 'a'].push_back(i);
        int ind = 0, now = -1;
        int ans = 1;
        while(ind < t.size()){
            int tem = t[ind] - 'a';
            if(p[tem].size() == 0){
                ans = -1;
                break;
            }
            if(upper_bound(p[tem].begin(),p[tem].end(),now) == p[tem].end()){
                ans++;
                now = -1;
                continue;
            };
            now =*upper_bound(p[tem].begin(),p[tem].end(),now);
            ind++;
        }
        cout<<ans<<'\n';
    }
}