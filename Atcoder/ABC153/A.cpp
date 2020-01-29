#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int h,a;
    cin>>h>>a;
    int ans = h/a;
    h %=a;
    if(h>0)
        ans++;
    cout<<ans; 
 
 
}