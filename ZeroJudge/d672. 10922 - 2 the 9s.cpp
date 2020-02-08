#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
   // ios_base::sync_with_stdio(0);
   // cin.tie(0);
    string s;
    while(cin>>s && s !="0"){
        int sum=0;
        bool is = false;
        for(int i = 0 ; i < s.size() ; i++)
            sum+=(s[i]-'0');
        if(sum%9==0) is = true;

        if(!is){
            cout<<s<<" is not a multiple of 9.\n";
            continue;
        }else{
            cout<<s<<" is a multiple of 9 and has 9-degree ";
            int cnt = 0;
            while(sum%9==0 && sum!=9){
                cnt++;
                string tem = to_string(sum); 
                sum = 0;
                for(int i = 0 ; i < tem.size() ; i++)
                    sum+=(tem[i]-'0');      
            }
            if(sum==9)cnt++;
            cout<<cnt<<".\n";
        }
    }
}