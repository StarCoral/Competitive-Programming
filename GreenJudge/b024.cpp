#include<algorithm>
#include<iostream>
#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
#define ll long long

map<ll,ll> mp;

ll climb(ll n){
    if(mp.count(n)){
        return mp[n];
    }else if (n <= 2){
        mp[n]=n;
        return n;
    }else{
        mp[n] = climb(n-1)+climb(n-2);
        return mp[n];
    } 
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll k = climb(n);
    cout<<k<<' '<<climb(k%n);
}