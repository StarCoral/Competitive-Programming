#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
int ans[15];
vector<int> c_used(30,0);
vector<int> ld_used(30,0);
vector<int> rd_used(30,0);

void backtracking(int row){
    if(row>=n){
        for(int i = 0 ; i < n ; i++)
            cout<<ans[i]<<' ';
        cout<<'\n';
        return;
    }
    for(int col = 1 ; col <= n ; col++){
        if(c_used[col]) continue;
        if(ld_used[(col+row)]) continue;
        if(rd_used[(n+row-col)]) continue;

        c_used[col] = 1;
        ld_used[col+row] = 1;
        rd_used[n+row-col] = 1;

        ans[row] = col;
        backtracking(row+1);

        c_used[col] = 0;
        ld_used[col+row] = 0;
        rd_used[n+row-col] = 0;
    }
}

int main(){
    cin>>n;
    backtracking(0);
}