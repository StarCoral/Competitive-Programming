#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int score[N],len[N];
    for(int i = 0; i < N ; i++){
        cin>>score[i];
        len[i] = 1;
    }
        
    for(int i = 0 ; i < N ; i++){
        for(int j  = i+1 ; j<N ; j++){
            if(score[i]<score[j])
                len[j] = max(len[j],len[i]+1);
        }
    }
    int ans = 0 ;
    for(int i = 0 ; i < N ; i++)
        ans = max(ans,len[i]);
    cout<<ans;
}