#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    map<char,int> m;
    for(int i = 0 ; i < n ;i++){
        char c;
        cin>>c;
        m[c]++;
    }
    int one = m['n'], zero = m['z'];
    
    for(int i = 0 ; i < one ;i++){
        cout<<'1';
        if(i < one-1)
            cout<<' ';
    }
    for(int i = 0 ; i < zero ; i++){
        if(one>0)
            cout<<' '<<0;
        else if(i < zero-1)
            cout<<0<<' ';
        else
            cout<<0;
    }
    cout<<'\n';
}