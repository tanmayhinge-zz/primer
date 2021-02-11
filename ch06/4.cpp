// C++ program to illustrate the 
// iterators in vector 
#include <iostream> 
#include <vector> 

using namespace std; 


int fact(int a){
	int fa=1;
	while(a!=0){
		fa = fa*a;
		--a;
	}
	return fa;
	
}

int main() 
{ 
	int a;
	cin >> a;
	// note, write an if check for 1,13 only as that is int limit
	cout<<fact(a);
} 
