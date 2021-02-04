// just a playground file to test random code related to chp

#include <iostream>
using namespace std;
int main(){
	string l("Hello World!!!");
	for(auto &c : l)
		c = toupper(c);
		
	cout << l << endl;
		
}
