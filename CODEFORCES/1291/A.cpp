#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int n; string s;
        cin>>n>>s;
        vector<int> odd ;
        vector<int> even;
        vector<int> zero;
        for(int i = 0 ; i < n ; i++){
            if(((s[i]-'0')%2 == 1) && s[i]!='0'){
                odd.push_back(i);
            }  
            if(((s[i]-'0')%2 == 0) && s[i]!='0'){
                even.push_back(i);
            }
            if(s[i]==0){
                zero.push_back(i);
            }   
        }
        bool is = false;
        int ol = odd.size();
        int el = even.size();
        if(s == "0"){
            cout<<"-1\n";
            is = true;
        }
        else if(ol>=2){
            if(ol%2 == 0){
                for(int i = 0 ; i < ol ; i++){
                    cout<<s[odd[i]];
                }
                cout<<'\n';
            }
            else{
                for(int i = 0 ; i < ol-1 ; i++){
                    cout<<s[odd[i]];
                }
                cout<<'\n';
            }
        }else{
            cout<<"-1\n";
        }
    }
}
