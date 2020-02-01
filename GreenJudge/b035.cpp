#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define LL long long

int main(){
    int n;
    cin>>n;
    vector<int> T(n);
    for(int i = 0 ; i < n ; i++){
        cin>>T[i];
    }
    sort(T.begin(),T.end());
    int times = n-1;
    LL cnt = 0;
    for(int i = 0 ; i < n ; i++){
        cnt+=T[i]*times;
        times--;
    }
    cout<<cnt*100;
}