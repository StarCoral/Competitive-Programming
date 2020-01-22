#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int P[n];
    for(int i = 0 ; i < n ; i++)
        cin>>P[i];
    
    int m = P[0];
    int cnt = 1;
    for(int i = 1 ; i < n ; i++)
    {
        if(m>P[i]){
            cnt++;
            m = P[i];
        }
    }

    cout<<cnt;
}