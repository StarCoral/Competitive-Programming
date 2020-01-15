#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    ll a[1005][10]={}; //a[結尾是啥][第n個數字]的非遞減方法數
    ll b[1005][10]={}; //b[結尾是啥][第n個數字]的非遞增方法數

    //長度 = 1 , 1~n結尾各有一種方法
    for(int i = 0 ; i < n; i++){
        a[i][0] = 1;
        b[i][0] = 1;
    }

    for(int i = 1 ; i < m ; i++){
        ll sum = 0; 
        for(int j = 0 ; j < n ;j++){
            sum += a[j][i-1];
            sum %= mod;
            a[j][i] = sum;
            b[n-1-j][i] = sum;
        }
    }
    ll ans = 0;
    m--;
    for(int i = 0; i < n ;i++){
        for(int j = i ; j < n ; j++){
            ans += a[i][m]*b[j][m];
            ans %= mod;
        }
    }
    cout<<ans<<'\n';
}