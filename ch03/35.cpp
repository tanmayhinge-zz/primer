#include <bits/stdc++.h>

using namespace std;

int main(){
	int a[] = {1,2,3};
	//int *p;
	for(int *p=a; p < &a[3]; ++p){
		*p = 0;
		cout << *p;
	}
}
