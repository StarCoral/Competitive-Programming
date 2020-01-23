#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int p[3]={},n;
        cin>>p[0]>>p[1]>>p[2]>>n;
        int m = p[0];
        m = max(m,p[1]);
        m = max(m,p[2]);
        int sub = 0;
        for(int i = 0 ; i < 3 ; i++)
        {
            sub += (m-p[i]);
        }
        n -=sub;
        if((n)%3 == 0 && n >= 0)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
}