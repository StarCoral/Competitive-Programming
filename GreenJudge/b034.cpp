#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int coin_type[9] = {1,5,10,50,100,500,1000,5000,10000};
    int cnt = 0 ; 
    for(int i = 8 ; i >= 0 && n > 0 ; i--){
        int t = n / coin_type[i];
        cnt+=t;
        n -= t*coin_type[i];
    }
    cout<<cnt;
}