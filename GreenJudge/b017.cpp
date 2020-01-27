#include<algorithm>
#include<iostream>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int l1 = s1.length();
    int l2 = s2.length();
    int len = l1+l2;
    string t = "";
    
    for(int i = l2 ; i <= l1+l2 ; i++){
        t+='0';
    }
    s2 = t+s2;
    t = "";
    for(int i = l1 ; i <= l1+l2 ; i++){
        t+='0';
    }
    s1 = t+s1;

    vector<int> a(105,0);
    int carry = 0,cnt=0;
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    for(int i = 0 ; i <= len ; i++){
        for(int j = 0 ; j <= len ; j++){
            cnt = carry;
            carry = 0 ;
            cnt +=(s1[i]-'0')*(s2[j]-'0');
            if(cnt>=10){
                carry = cnt/10;
                cnt %=10;
            }
            a[i+j] += cnt;
        }
    }
    carry = 0;
    for(int i=0 ; i <= len ; i++){
        a[i]+=carry;
        carry = 0;
        if(a[i]>=10){
            carry = a[i]/10;
            a[i]%=10;
        }
    }
    bool is=false;
    for(int i = len-1 ; i >=0  ; i--){
        if(a[i]>0){
            is = true;
        }
        if(is)
            cout<<a[i];
    }
}

 

