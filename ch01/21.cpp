#include <iostream>
#include "Sales_item.h"


using std::cout;
using std::cin;
using std::endl;

int main(){
	Sales_item item1, item2;
	cin >> item1 >> item2;
	if(item1.isbn() == item2.isbn())
		cout << item1 + item2;
	else
		cout << "ISBNs do not match";
}
