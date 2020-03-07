#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a ,b;
    cin>>a>>b;
    for(int i = 1 ; i <= 2000 ; i++){
        if(floor(i*0.08) == a && floor(i*0.1) == b){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
}