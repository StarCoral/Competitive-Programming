#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a1,a2,k1,k2,n;
    cin>>a1>>a2>>k1>>k2>>n;
    int minA = 0 , maxA =0;
    vector<int>p;
    for(int i = 0 ; i < a1 ; i++)
        p.push_back(k1);
    for(int i = 0 ; i < a2 ; i++)
        p.push_back(k2);
    
    sort(p.begin(),p.end());
    
    int tem = n;
    for(int i = 0 ; i < p.size(); i++){
        if(tem - p[i] >=0){
            maxA++;
            tem -=p[i];
        }
        else
            break;
    }
    minA = n - ((k1-1)*a1+(k2-1)*a2);
    if(minA < 0)
        minA = 0;

    cout<<minA<<' '<<maxA<<'\n';
}