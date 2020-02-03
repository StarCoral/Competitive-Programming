#include<bits/stdc++.h>
using namespace std;
#define LL long long

int main(){
    string s;
    cin>>s;
    map<int,int> m;
    for(int i = 0 ; i < s.size() ; i++)
        m[s[i]-'a']++;

    bool exist = false;
    for(int i = 0 ; i < 26 ; i++){
        if(m[i] == 0){
            cout<<char(i+'a');
            exist = true;
            break;
        }
    }
    if(!exist)
        cout<<"None";
}