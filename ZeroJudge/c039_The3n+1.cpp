#include<bits/stdc++.h>
using namespace std;

int find(long long m){
    int cnt = 1;
    while(m!=1){
        if(m&1){
            m = 3*m+1;
        }
        else{
            m /=2;
        }
        cnt++;
    }
    return cnt;
}

int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int a,b,mx;
    
    while(cin>>a>>b){
        mx = 0;
        cout<<a<<' '<<b<<' ';
        if(a>b){
            a = a^b;
            b = a^b;
            a = a^b;
        }
        for(int i = a ; i <= b ; i++){
            mx = max(mx,find(i));
        }
        cout<<mx<<'\n';
    }
}