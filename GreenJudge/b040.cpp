#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,m;
int item[25];
bool choose[25];
bool is = false;
void find(int ind, int cur){
    if(cur == m){
        for(int i = 0 ; i <= n ; i++){
            if(choose[i])
                cout<<item[i]<<' ';
        }
        cout<<'\n';
        is = true;
        return;
    }
    if(ind == n){
        return;
    }
    if(cur>m) return;

    choose[ind]=1;
    find(ind+1,cur+item[ind]);

    choose[ind]=0;
    find(ind+1,cur);
}
int main(){
    cin>>n>>m;
    for(int i = 0 ; i<n; i++){
        cin>>item[i];
    }
    find(0,0);
    if(!is){
        cout<<"NO\n";
    }
}
