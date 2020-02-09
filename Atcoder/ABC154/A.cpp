#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string S,T,U;
    int A,B;
    cin>>S>>T>>A>>B>>U;
    if(S==U) A--;
    else if(T==U) B--;
    cout<<A<<' '<<B<<'\n';
}