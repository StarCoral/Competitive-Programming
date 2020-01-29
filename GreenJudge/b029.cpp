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
    int Type[5] = {2,5,10,20,25};
    vector<int> change(1001,0);
    change[0] = 1;
    for(int i = 0 ; i < 5 ; i++){
        for(int j = Type[i] ; j <= n ; j++){
            change[j] += change[j-Type[i]];
        }
    }
    cout<<change[n];
}