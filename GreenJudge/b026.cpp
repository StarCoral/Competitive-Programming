#include<algorithm>
#include<iostream>
#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n],mx = -1e9 , sum = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>a[i]; 
    }
    for(int i = 0 ; i < n ; i++){
        sum =max(0,(sum+a[i]));
        mx = max(mx,sum);
    }
    cout<<mx;
}