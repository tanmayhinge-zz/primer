#include <iostream>
#include "Sales_item.h"


using std::cout;
using std::cin;
using std::endl;

int main(){
	Sales_item sum;
	Sales_item item1;
	while(cin >> item1){
	sum = sum + item1;
	}
	cout << sum;
}
