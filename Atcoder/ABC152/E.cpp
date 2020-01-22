#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second

const int mod = 1e9+7;
ll inv(int x){
    ll now = x;
    ll ret = 1;
    ll p = 1e9 + 5;
    while(p){
        if(p&1){
            ret *= now;
            ret %= mod;
        }
        now *= now;
        now %= mod;
        p >>= 1;
    }
    return ret;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n){
        map<int,int>mp;
        vector<ll>v(n);
        for(auto &i:v){
            cin >> i;
        }
        for(auto i:v){
            for(int j = 2 ; j <= sqrt(i) ; j++){
                if(i%j)continue;
                int cnt = 0;
                while(i % j == 0){
                    i /= j;
                    cnt++;
                }
                mp[j] = max(mp[j], cnt);
            }
            if(i >1){
                mp[i] = max(mp[i],1);
            }
        }
        ll tot = 1;
        for(auto i:mp){
            while(i.S--){
                tot *= i.F;
                tot %= mod;
            }
        }
        ll sum = 0;
        for(auto i:v){
            sum += tot * inv(i);
            sum %= mod;
        }
        cout << sum << '\n';
    }
}