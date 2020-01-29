#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int h,a;
    cin>>h>>a;
    int t = 0;
    for(int i = 0 ; i < a ; i++)
    {
        int A;
        cin>>A;
        t+=A;
    }
    if(t>=h)
        cout<<"Yes\n";
    else
        cout<<"No\n";
 
}