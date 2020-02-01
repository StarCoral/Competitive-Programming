#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        ll a , m;
        cin>>a>>m;
        ll ub = a+m-1;
        ll lb = a;
        ll g = __gcd(a,m); // g = gcd(a,m) = gcd(a+x,m)
        ub /= g;           //range(a+x) = [a,a+m)
        lb /= g;
        m  /= g;           //-> num(gcd([lb,ub],m) = 1)
        //find prime factor
        vector<ll> pf;
        ll tmp = m;
        for(int i = 2 ; i <= sqrt(tmp) ; i++){
            if(tmp%i == 0){
                pf.push_back(i);
                while(tmp%i == 0)
                    tmp/=i;
            }
        }
        if(tmp>1)
            pf.push_back(tmp);
        //Inclusion-Exclusion Principle排容原理
        int sz = pf.size();
        ll ans = 0;
        for(int i = 0 ; i < (1<<sz) ; i++){
            ll mul = 1;
            for(int j = 0 ; j < sz ; j++){
                if((1<<j) & i)
                    mul *= pf[j];
            }
            ll low = (lb-1)/mul; // 最小的可以的前一個
            ll up = ub / mul; //可以的最後一個
            if(__builtin_popcount(i)&1)
                ans -= up-low;
            else
                ans += up-low;
        }
        cout<<ans<<'\n';
    }
}