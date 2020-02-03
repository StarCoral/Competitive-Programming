#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,n_L = 0,n_R = 0,sub = 0;
    string way;

    cin>>num;
    cin>>way;

    map<char,int> step;

    for(int i = 0 ; i < num ; i++){
        step[way[i]]++;
    }
    n_L = step['L'];
    n_R = step['R'];
    cout<<(n_L+n_R+1)<<"\n";
    return 0;
}