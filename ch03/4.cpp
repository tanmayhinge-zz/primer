// just a playground file to test code

#include <iostream>
using namespace std;
int main(){
	string line, line2;
	while(cin>>line >> line2)
		if(line == line2)
			cout << "yes";
		else
			cout << "string " << ((line>line2)?line:line2) << "is greater";
	return 0;
}
