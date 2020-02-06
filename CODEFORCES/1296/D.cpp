#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b,k,t;
    cin>>n>>a>>b>>k;
    int both = a+b;
    vector<int>wait;
    for(int i = 0 ; i < n ; i++){
        cin>>t;
        t%=both;
        if(t==0) 
            t = both;
        int tem = ceil(((double)t/(double)a))-1;
        wait.push_back(max(tem,0));
    }
    sort(wait.begin(),wait.end());
    for(int i = 0 ; i < n ; i++){
        k -=wait[i];
        if(k<0){
            cout<<i<<'\n';
            exit(0);
        }
    }
    cout<<n<<'\n';
}