#include<bits/stdc++.h>
using namespace std;

bool isWord(char c){
    if((c>='A' && c <= 'Z') || (c>='a' && c<='z'))
        return true;
    else
        return false;
}
int main(){
    string s;
    while(getline(cin,s)){
        int cnt = 0;
        for(int i = 1 ; i < s.size() ; i++){
            if(!isWord(s[i-1])&&isWord(s[i]))
                cnt++;
        }
        if(isWord(s[0]))
            cnt++;
        cout<<cnt<<"\n";
    }   
}