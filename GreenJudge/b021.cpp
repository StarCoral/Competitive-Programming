#include<algorithm>
#include<iostream>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Student{
    int T,m,ind;
};
bool cmp(Student a, Student b){
    if(a.T>b.T)
        return true;
    else if(a.T==b.T && a.m > b.m)
        return true;
    else
        return false;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<Student> a;

    for(int i = 0 ; i < n ; i++){
        Student s;
        int ind,c,e,m,p,g;
        cin>>ind>>c>>e>>m>>p>>g;
        s.T = c+e+m+p+g;
        s.ind = ind;
        s.m = m;
        a.push_back(s);
    }
    sort(a.begin(),a.end(),cmp);
    for(int i = 0 ; i < n ; i++){
        cout<<a[i].ind<<'\n';
    }
}

 

