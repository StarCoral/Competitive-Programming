#include<algorithm>
#include<iostream>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int cnt = 0;
int f(int n){
    cnt++;
    if(n<=1)
        return n;
    else
        return f(n-1)+f(n-2);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int ans =f(n);
    cout<<ans<<' '<<cnt<<'\n';
}

 

