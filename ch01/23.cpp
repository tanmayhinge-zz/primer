#include <iostream>
#include "Sales_item.h"


using std::cout;
using std::cin;
using std::endl;

int main(){
	Sales_item i, j;
	if(cin >> i){
		
		int c = 1;
		
		while (cin >> j){
			if(i.isbn() == j.isbn()){
				++c;
			}
			else{
				cout << i.isbn() << " occurs " << c << " times" << endl;
				j = i;
				c = 1;
				
			}
		}
		cout << i << " occurs " << c << " times" << endl;

	}
	return 0;
}
