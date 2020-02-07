#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    vector<int> ans[100];
    int s[10]={0,1,2,3,4,5,6,7,8,9};
    do{
        int a = 0, b = 0;
        for(int i = 0 ; i < 5 ; i++)
            a = a*10 + s[i];
        for(int i = 5 ; i < 10 ; i++)
            b = b*10 + s[i];
        if(b%a == 0)
            ans[b/a].push_back(a);
    }while(next_permutation(s,s+10));

    for(int i = 0 ; i < 100 ; i++){
        sort(ans[i].begin(),ans[i].end());
    }
    int n;
    while(cin>>n && n!=0){
        if(ans[n].size()==0)
            cout<<"There are no solutions for "<<n<<".\n";
        else
            for(auto i: ans[n])
                printf("%05d / %05d = %d\n",i*n,i,n) ;
        cout<<'\n';
    }
}