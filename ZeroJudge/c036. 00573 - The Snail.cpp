#include<bits/stdc++.h>
using namespace std;

int main(){
    double H,U,D,F;
    while(cin>>H>>U>>D>>F){
        if(H == 0) break;
        double nh = 0;
        int day=0;
        F = U*(F/100);
        while(true){
            day++;
            nh += U;
            U -=F;
            if(U<0) U=0;
            if(nh>H){
                cout<<"success on day "<<day<<'\n';
                break;
            }
            else if(nh<0){
                cout<<"failure on day "<<day<<'\n';
                break;
            }
            nh -= D;
            if(nh>H){
                cout<<"success on day "<<day<<'\n';
                break;
            }
            else if(nh<0){
                cout<<"failure on day "<<day<<'\n';
                break;
            }
        }
    }
}