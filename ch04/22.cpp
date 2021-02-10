#include <bits/stdc++.h>

using namespace std;

int main(){
	int g;
	while(cin>>g){
		auto res = (g>90)?"highppass":g<60?"fail":g<75?"low":"pass";
		cout <<res;
	}
}
