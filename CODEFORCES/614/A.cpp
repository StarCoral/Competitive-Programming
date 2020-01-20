#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,s,k;
        cin>>n>>s>>k;
        map<int,int> a;
        for(int i = 0 ; i < k ; i++){
            int tem;
            cin>>tem;
            a[tem]++;
        }
        int ans = 0;
        if(a[s] == 0){
            cout<<0<<'\n';
        }
        else{
            int step = 0;
            bool is = false;
            for(int i = s ; i <= n ; i++){
                if(a[i]!=0){
                    step++;
                }
                if(a[i] == 0){
                    is = true;
                    break;
                }
            }
            int back = 0;
            bool b = false;
            for(int i = s ; i>=1 ; i--){
                if(a[i]!=0){
                    back++;
                }
                if(a[i] == 0){
                    b = true;
                    break;
                }
            }
            if(is && b)
                ans = min(step,back);
            else if(is && !b)
                ans = step;
            else
                ans = back;
            cout<<ans<<'\n';
        }


    }

}