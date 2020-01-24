#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(12);
    int n;
    cin>>n;
    double ans = 1.0;
    for(int i = 2 ; i <= n ; i++){
        ans += ((double)(1.0)/(double)i);   
    }
 
 
    cout<<ans<<'\n';
    
}