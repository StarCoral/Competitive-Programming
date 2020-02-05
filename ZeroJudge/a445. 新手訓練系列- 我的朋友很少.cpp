#include<bits/stdc++.h>
using namespace std;

int d[10005];

int find(int x){
    return d[x] == x ? x: d[x] = find(d[x]);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N,M,Q;
    cin>>N>>M>>Q; 
    for(int i =1 ; i <=N ; i++)
        d[i] = i;
    for(int i = 0; i<M ;i++){
        int A,B;
        cin>>A>>B;
        A = find(A);
        B = find(B);
        d[A]=B;
    }
    for(int i = 0 ; i <Q ;i++){
        int a,b;
        cin>>a>>b;
        a = find(a);
        b = find(b);
        if(a!=b){
            cout<<":(\n";
        }
        else{
            cout<<":)\n";
        }
    }
    return 0;
}