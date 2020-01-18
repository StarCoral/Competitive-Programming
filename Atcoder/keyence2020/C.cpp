#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,s;
    cin>>n>>k>>s;
    for(int i = 0 ; i < k ; i++)
        cout<<s<<' ';
    if(s == 1e9){
        for(int i = 0 ; i < n-k ; i++)
            cout<<s-1<<' ';
    }
    else{
        for(int i = 0 ; i < n-k ; i++)
            cout<<s+1<<' ';
    }
    cout<<'\n';
}