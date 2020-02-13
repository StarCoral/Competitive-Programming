#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define pb push_back
 
int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        vector<int> p;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '1')
                p.push_back(i);
        }
        
        int ans = 0;
        if(p.size()<=1){
            cout<<"0\n";
        }else{
            for(int i = p.size()-1 ; i>=1 ; i--){
                ans += (p[i]-p[i-1]-1) ;
                //cout<<"ans:"<<ans<<'\n';
            }
            cout<<ans<<'\n';
        }
    }
   
}