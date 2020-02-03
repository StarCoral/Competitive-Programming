#include<bits/stdc++.h>
using namespace std;
 
int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int n; 
        cin>>n;
        vector<int>a(n);
        int b[n],c[n];
        for(int i = 0 ; i < n ; i++){
            cin>>a[i];
            b[i] = i;
            if(i<n/2){
                c[i] = i;
                c[n-i-1] = i;
            }
        }
        c[n/2] = n/2;
        int cnt = 0;
        bool b1 = true , b2 = true;
        bool c1 = true , c2 = true;
        for(int i = 0 ; i < n ; i++){
            if(b1){
                if(a[i]<b[i]){
                    b1 = false;
                }
            }
            if(b2){
                if(a[i]<b[n-i-1])
                    b2 = false;
            }
            if(c1){
                if(a[i]<c[i]){
                    c1 = false;
                }
            }
            if(c2){
                if(a[i]<c[n-i-1])
                    c2 = false;
            }
        }
        if(b1 || b2 || c1 || c2){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    } 
    
}