#include<algorithm>
#include<iostream>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> a(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i = 0 ; i < n ; i++){
        cout<<a[i]<<'\n';
    }

}

 

