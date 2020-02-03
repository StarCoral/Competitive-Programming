#include<iostream>
#include<vector>
#include<queue>
#include<deque>
#include<algorithm>
using namespace std;
#define LL long long

int n,m;
int ans[10];

void permute(int ind){
    if(ind == n){
        for(int i = 0 ; i < n ; i++)
            cout<<ans[i];
        cout<<'\n';
        return;
    }
    for(int i = 0 ; i <= m ; i++){
        ans[ind]=i;
        permute(ind+1);
    }
}
int main(){
    cin>>n>>m;
    permute(0);
}