#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<vector<int>> s(10,vector<int>(10,0));

    for(int i = 1 ; i <= n ; i++){
        int head,tail;
        int tem = i;
        
        while(tem > 9)
            tem /= 10;
        head = tem;
        tail = i%10;
        s[head][tail]++;
    }

    int ans = 0;
    for(int i = 0 ; i < 10 ; i++){
        for(int j  = 0 ; j < 10 ; j++){
            ans += s[i][j] * s[j][i];
        }
    }
    cout<<ans;
}