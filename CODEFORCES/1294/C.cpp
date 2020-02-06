#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> m;
        int tot = 0;
        for(int i = 2 ; i <= sqrt(n) ; i++){
            if(n%i) continue;
            while(n%i == 0){
                n /= i;
                m[i]++;
                tot++;
            }
        }
        if(n>1)
            m[n]++;
        if(m.size()>=3){
            int a = 1 , b = 1 , c = 1;
            for(auto i: m){
                if(a == 1){
                    while(i.second--){
                        a *= i.first;
                    }
                }
                else if(b == 1){
                    while(i.second--){
                        b *= i.first;
                    }
                }
                else{
                    while(i.second--){
                        c *= i.first;
                    }
                }
            }
            cout<<"YES\n";
            cout<<a<<' '<<b<<' '<<c<<'\n';
        }
        else if(m.size()==1){
            for(auto i : m){
                if(i.second>=6){
                    int now = i.first;
                    cout<<"YES\n";
                    cout<<now<<' '<<now*now<<' ';
                    int r = i.second-4;
                    while(r--)
                        now *=i.first;
                    cout<<now<<'\n';
                }
                else{
                    cout<<"NO\n";
                }
            }
        }
        else{
            int a = 1 , b = 1 , c = 1;
            for(auto i: m){
                int cnt  = i.second -1;
                if(a == 1){
                    a *= i.first;
                }
                else{
                    b *= i.first;
                }
                while(cnt--)
                    c *= i.first;
            } 
            if(min({a,b,c})!=1 && a!=b && a != c && b != c){
                cout<<"YES\n"<<a<<' '<<b<<' '<<c<<'\n';
            }
            else
                cout<<"NO\n";
        }
    }
}