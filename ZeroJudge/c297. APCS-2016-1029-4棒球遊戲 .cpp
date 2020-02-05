#include<bits/stdc++.h>
using namespace std;

map<int,queue<string>> m;

int main(){   
    for(int i = 0 ; i < 9 ; i++){
        int a;
        cin>>a;
        queue<string>q;
        for(int j = 0 ; j < a ; j++){
            string s;
            cin>>s;
            q.push(s);
        }
        m[i] = q;
    }
    int target;
    cin>>target;

    int out = 0, score = 0,hp = -1;
    int b1 = 0, b2 = 0, b3 = 0,  b4 = 0;
    while(true){
        hp = (hp+1)%9;
        string hit = m[hp].front();
        m[hp].pop();
        int step = 0;
        if(hit == "SO" || hit == "GO" || hit == "FO"){
            out++;
            if(out == target) break;
            if(out%3 == 0)
                b1 = b2 = b3 = b4 = 0;
        }else if(hit == "HR"){
            step = 4;
        }else{
            step = hit[0]-'0';
        }
        for(int i = 1 ; i <= step ; i++){
            b4 = b3;
            b3 = b2;
            b2 = b1;
            if(i == 1) b1 = 1;
            else b1 = 0;
            if(b4 == 1){
                score++;
            }
        }
    }
    cout<<score<<'\n';
}