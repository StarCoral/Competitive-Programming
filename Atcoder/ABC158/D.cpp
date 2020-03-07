#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string s;
    char s2;
    int q,t,f,now = 1,cnt=0;
    cin>>s>>q;
    deque<char> ans;
    for(auto c:s)
        ans.push_back(c);

    for(int i = 0 ; i < q ; i ++){
        cin>>t;
        
        if(t == 1){
            now =!now;
            //cout<<"now:"<<now<<'\n';
            cnt++;
        }
        else{
            cin>>f>>s2;
            if(now){
                if(f==1){
                    ans.push_front(s2);
                }else{
                    ans.push_back(s2);
                }
            }
            else{
                if(f==2){
                    ans.push_front(s2);
                }else{
                    ans.push_back(s2);
                }                
            }
            
        }
    }
    if(cnt%2==0){
       while(!ans.empty()){
           cout<<ans.front();
           ans.pop_front();
       }
    }else{
       while(!ans.empty()){
           cout<<ans.back();
           ans.pop_back();
       } 
    }

 
}