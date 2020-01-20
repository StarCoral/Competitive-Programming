#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N,A,B,t1,t2;
    cin>>N>>A>>B;

    int ans = 0;
    for(int i = 1 ; i <= N ;i++){
        t1 = 0;
        t2 = i;
        while(t2){
            t1 += t2%10;
            t2 /= 10;
        }
        if(A <= t1 && t1 <= B)
            ans+=i;
    }
    cout<<ans;
}