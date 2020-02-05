#include<bits/stdc++.h>
using namespace std;

int isalphet(char c){
    if(c>='A' && c<='Z')
        return 1;
    else if(c>='a' && c<='z')
        return 2;
    else 
        return 0;
}
int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int T;
    cin>>T;
    cin.ignore();
    while(T--){
        string s;
        getline(cin,s);
        map<int,int> m;
        int ans = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(isalphet(s[i])==1){
                m[s[i]-'A']++;
                ans = max(ans,m[s[i]-'A']);
            }
            if(isalphet(s[i])==2){
                m[s[i]-'a']++;
                ans = max(ans,m[s[i]-'a']);
            }
        }
        for(auto i: m){
            if(i.second == ans){
                cout<<char(i.first+'a');
            }
        }
        cout<<'\n';
    }
}