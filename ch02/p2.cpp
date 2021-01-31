#include <iostream>

int main(){
	int *a = nullptr;
	int *pi = a;
	int c = 10;
	int &b = c;
	std::cout << pi << &b << std::endl;
}

// just practice
