#include<iostream>
using namespace std;

int main(){
   string s1,s2;
   cin>>s1>>s2;
   int n1 = s1.size() , n2 = s2.size();
   //len[i][j]: s1前i個元素，s2前j個元素的LCS長度
   int len[n1+1][n2+1];
   for(int i = 0 ; i <= n1 ; i++) len[i][0] = 0;
   for(int i = 0 ; i <= n2 ; i++) len[0][i] = 0;

   for(int i = 1 ; i <= n1 ; i++){
       for(int j = 1 ; j <= n2 ; j++){
           //cout<<"i: "<<i-1<<" j: "<<j-1<<" s1: "<<s1[i-1]<<" s2: "<<s2[j-1];
           if(s1[i-1] == s2[j-1])
                len[i][j] = len[i-1][j-1]+1;
            else
                len[i][j] = max(len[i-1][j],len[i][j-1]);
            //cout<<"len["<<i<<"]["<<j<<"] = "<<len[i][j]<<'\n';
       }
   }
   cout<<len[n1][n2];
}