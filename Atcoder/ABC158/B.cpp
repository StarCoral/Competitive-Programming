#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll N,A,B;
    cin>>N>>A>>B;
    ll s = A+B , d = N/s ,t = N%s;
    if(t>A) t = A;
    cout<<(d*A+t)<<'\n';
}