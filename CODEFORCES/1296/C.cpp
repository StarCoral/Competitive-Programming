#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int n;
        string s;
        cin>>n>>s;
        map<pair<int,int>,int> m;
        int p1=0, p2=0, ans=0, mi=1e7;
        m[{0,0}] = 0;
        for(int i = 1 ; i <= n ; i++){
            if(s[i-1]=='R') p1++;
            if(s[i-1]=='L') p1--;
            if(s[i-1]=='U') p2++;
            if(s[i-1]=='D') p2--;
            if(m.count({p1,p2})){
                if(i-m[{p1,p2}]<mi){
                    mi = i-m[{p1,p2}];
                    ans = m[{p1,p2}];
                }
            }
            m[{p1,p2}]=i;
        }
        if(mi==1e7){
            cout<<"-1\n";
        }else{
            cout<<ans+1<<' '<<ans+mi<<'\n';
        }
    }
}