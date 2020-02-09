#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    map<int,int>mp;
    cin>>n;
    int cnt =0;
    for(int i = 0; i < n ;i++){
        int t;
        cin>>t;
        mp[t]++;
        if(mp[t]>1) cnt++;
    }
    if(cnt>0)
        cout<<"NO\n";
    else
        cout<<"YES\n";
}