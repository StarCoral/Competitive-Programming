#include<algorithm>
#include<iostream>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void Hanoi(int n , int a , int b, int c){
    
    if(n == 1)
        cout<<"Ring "<<n<<" from "<<a<<" to "<<c<<"\n";
    else{
        Hanoi(n-1,a,c,b);
        cout<<"Ring "<<n<<" from "<<a<<" to "<<c<<"\n";
        Hanoi(n-1,b,a,c);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    Hanoi(n,1,2,3);  
}

 

