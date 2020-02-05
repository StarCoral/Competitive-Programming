#include<bits/stdc++.h>
using namespace std;

int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int n,x,iCase=0;
    while(cin>>n>>x){
        iCase++;
        int bye[20];
        for(int i = 0 ; i < 20 ; i++){
            cin>>bye[i];
        }

        vector<bool>used(n+1,true);
        int cnt = n,now = 0;
        for(int i = 0 ; i < 20 ; i++){
            int tem = bye[i];
            now = 0;
            for(int j = 1 ; j <= n ; j++){
                if(cnt==x)
                    break;
                if(used[j]){
                    now++;
                    if(now%tem==0){
                        used[j]=false;
                        cnt--;
                    }
                }
            }
            
        }
        cout<<"Selection #"<<iCase<<'\n';
        for(int i = 1 ; i <= n; i++){
            if(used[i]){
                cout<<i<<' ';
            }
        }
        cout<<"\n\n";
    }
}