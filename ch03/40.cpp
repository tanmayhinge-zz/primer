#include <bits/stdc++.h>

using namespace std;

int main(){
	
	const char a[] = "string1";
	const char b[] = "string2";
	
	const size_t s= strlen(a)+strlen(b);
	char third[s];
	strcpy(third,b);
	strcat(third,a);
	cout<<third<<endl;
	
}
