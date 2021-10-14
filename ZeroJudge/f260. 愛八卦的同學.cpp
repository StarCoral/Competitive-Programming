#include<bits/stdc++.h>
using namespace std;



int d[10005];

int Find(int x){
	return d[x] == x ? x : d[x] = Find(d[x]);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n,k;
	while(cin>>n>>k){
	int group = n;
	for(int i = 0 ; i < n ; i++){
		d[i] = i;
	}

	for(int i = 0 ; i < k ; i++){
		int a,b;
		cin>>a>>b;
		int g1 = Find(a);
		int g2 = Find(b);
		if(g1 == g2) continue;
		group--;
		d[g1] = g2;
	}
	cout<<group<<"\n";
	}
}
