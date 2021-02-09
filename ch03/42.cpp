#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a[]={1,2,3,4};
	vector<int>v(begin(a),end(a));
	//for(auto i:v) cout<<i<<" ";
	int b[4];
	for(int i = 0; i<4; ++i)b[i]=v[i];
	
	for(auto i:b) cout<<i<<' ';
	
}
