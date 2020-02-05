#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    string s;
    while(getline(cin,s) && s!="0"){
        ll n,t,num=1;
        stringstream ss(s);
        string wd1,wd2;
        while(ss>>wd1 && ss>>wd2){
            n = stol(wd1);
            t = stol(wd2);
            for(int i = 0 ; i < t ; i++){
                num*=n;
            }
        }
        ss.clear();
        num = num-1;
        int cnt = 0;
        vector<pair<int,int>> v;
        for(ll i = 2 ; i <= sqrt(num) ; i++){
            if(num%i!=0) continue;
            while(num%i == 0){
                cnt++;
                num/=i;
            }
            v.push_back({i,cnt});
            cnt = 0;
        }
        if(num>1){
            v.push_back({num,1});
        }
        sort(v.rbegin(),v.rend());
        for(auto i : v){
            cout<<i.first<<' '<<i.second<<' ';
        }
        cout<<'\n';
    }
}