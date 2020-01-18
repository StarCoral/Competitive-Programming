#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int H,W,N;
    cin>>H>>W>>N;
    int cnt = 0,tem = 0;

    if(H>W){
        cnt = N/H;
        N = N%H;
    }else{
        cnt = N/W;
        N = N%W;
    }
    if(N>0)
        cnt++;
    cout<<cnt<<'\n';
}