#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <=n ; j++){
            if((i%2 == 1 && j%2 ==1)||(i%2==0 && j%2==0))
                cout<<'W';
            else
                cout<<'B';
        }
        cout<<"\n";
    }

    return 0;
}