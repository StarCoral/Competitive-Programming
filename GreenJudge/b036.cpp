#include<iostream>
#include<vector>
#include<queue>
#include<deque>
#include<algorithm>
using namespace std;
#define LL long long

int main(){
    int n; 
    cin>>n;
    deque<int> q;

    for(int i = 0 ; i < n ; i++){
        int s;
        cin>>s;
        q.push_back(s);
    }
    sort(q.begin(),q.end());
    int ans = 0;
   // for(int i = 0 ; i < n ; i ++){}
    
    while(q.size()!=1){
        int a = q.front();
        q.pop_front();
        int b = q.front();
        q.pop_front();
        ans += a+b;
        q.push_front(a+b);
        sort(q.begin(),q.end());
    }
    cout<<ans;
    
}