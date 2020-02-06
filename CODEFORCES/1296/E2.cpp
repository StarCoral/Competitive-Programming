#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; 
    string s;
    cin>>n>>s;
    vector<string> ans;
    vector<char> x(n,'a');
    int mx = 1;
    for(int i = 0; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(s[i]>=x[j]){
                ans.push_back(to_string(j+1));
                x[j]=s[i];
                mx = max(j+1,mx);
                break;
            }
        }
    }
    cout<<mx<<'\n';
    for(auto i: ans)
        cout<<i<<' ';
}