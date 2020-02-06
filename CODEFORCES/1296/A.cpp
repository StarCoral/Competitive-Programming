#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int>odd;
        vector<int>even;
        for(int i = 0 ; i < n ; i++){
            int tem;
            cin>>tem;
            if(tem%2==1)
                odd.push_back(tem);
            else if( (tem%2==0) && tem !=0)
                even.push_back(tem);
        }
        int ol = odd.size();
        int el = even.size();
        n = ol + el;
        //cout<<"ODD: "<<ol<<" even: "<<el<<"\n";
        if(ol%2 == 1){
            cout<<"YES\n";
        }else if(el>=1 && ol%2 ==0 && ol != 0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}