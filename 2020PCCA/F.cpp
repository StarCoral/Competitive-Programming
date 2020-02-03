#include<bits/stdc++.h>
using namespace std;
struct can{
    int num;
    int pos;
};
bool cmp(can a, can b){
    return a.num>b.num;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<can> a(n);
    for(int i = 0 ; i < n ; i++){
        can t;
        cin>>t.num;
        t.pos = i;
        a[i] = t;
    }
    sort(a.begin(),a.end(),cmp);
    int count = 0, ans  = 0;
    for(int i = 0 ; i < n ; i++){
        ans += count*a[i].num;
        count++;
    }
    ans +=n;
    cout<<ans<<'\n';

    for(int i = 0 ; i < n ; i++){
        cout<<a[i].pos+1;
        if(i!= n-1)
            cout<<' ';
    }
    cout<<'\n';
}