#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n,a[20],ans[20];
bool used[20];

void permute(int cur, int ind){
    if(cur == 6){
        for(int i = 0 ; i < 6 ; i++){
            cout<<ans[i];
            if(i!=5)
                cout<<' ';
        } 
        cout<<'\n';
    }else{
        for(int i = ind ; i < n ; i++){
            if(used[i]) continue;
            ans[cur] = a[i];
            used[i] = true;
            permute(cur+1,i+1);
            used[i]=false;
        }
    }
}
int main(){
    int out = 0;
    while(cin>>n && n!=0){ 
        for(int i = 0; i < n ; i++){
            cin>>a[i];
            used[i]=false;
        }
        sort(a,a+n);
        if(out>0) cout<<'\n';
        permute(0,0);    
        out++;
    }
}