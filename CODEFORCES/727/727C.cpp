#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b,c,ans[5005];
    cout<<"? 1 2"<<endl;
    cin>>a;
    cout<<"? 2 3"<<endl;
    cin>>b;
    cout<<"? 1 3"<<endl;
    cin>>c;
    ans[1] = (a+b+c)/2-b;
    ans[2] = (a+b+c)/2-c;
    ans[3] = (a+b+c)/2-a;
    for(int i = 4 ; i <= n ; i++){
        cout<<"? 1 "<<i<<endl;
        int tem;
        cin>>tem;
        ans[i] = tem - ans[1];
    }
    cout<<"! ";
    for(int i = 1 ; i <= n ; i++){
        cout<<ans[i]<<' ';
    }
    cout<<endl;
}