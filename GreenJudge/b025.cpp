#include<algorithm>
#include<iostream>
#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
#define ll long long int

ll move(ll n, ll k){
   ll C[n+1][k+1]; 
   for(int i = 0 ; i <= n ; i++){
       for(int j = 0 ; j <= k ; j++){
           C[i][j]=0;
       }
   }
   for(ll i = 0 ; i <= n ; i++){
       for(ll j = 0 ; j <= min(i,k) ; j++){
            if(j == 0 || j == n)
                C[i][j] = 1;
            else
                C[i][j] = C[i-1][j]+C[i-1][j-1];
       }
   }
   return C[n][k];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll x,y;
    cin>>x>>y;
    cout<<move(x+y,y);
}