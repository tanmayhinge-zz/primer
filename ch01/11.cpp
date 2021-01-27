#include <iostream>

using std::cout; 
using std::cin;


void range(int a, int b){
	
	
	if(a > b){
	
		range(b, a);
		
	}
	
	while(a != b){
		cout << a++ << " ";
	}
	
}


int main(){
	int a = 0, b = 0;
	cout << "Enter 2 numers: \n";
	cin >> a >> b;
	range(a, b);
	return 0;
}
