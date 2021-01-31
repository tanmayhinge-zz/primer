#include <iostream>

int main(){
	int a = 1;
	int b = 2;
	int *p2;
	int *p1 = &a;
	p2 = &a;
	std::cout << *p1 << std::endl << *p2 << std::endl;
	*p1 = b;
	std::cout << *p1 << std::endl << *p2 << std::endl;
}
