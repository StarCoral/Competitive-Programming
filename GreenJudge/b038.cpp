#include<iostream>
#include<vector>
#include<queue>
#include<deque>
#include<algorithm>
#include<cstring>
using namespace std;
#define LL long long

int a[10],n;
vector<int> used(10,0);

void permute(int ind){
    if(ind == n){
        for(int i = 0 ; i < n ; i++){
            cout<<a[i];
        }
        cout<<"\n";
        return;
    }
    for(int i = 1 ; i <= n ; i++){
        if(used[i]==0){
            used[i]=1;
            a[ind]=i;
            permute(ind+1);
            used[i]=0;
        }
    }
}

int main(){
    cin>>n;
    permute(0);
}
