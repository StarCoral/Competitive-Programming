#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    if(n>m){
        int t;
        t = n;
        n = m;
        m = t;
    }
    for(int i = 0 ; i < m ; i++){
        cout<<n;
    }
}