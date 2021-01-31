// just a playground file to test code

#include <iostream>
using namespace std;
int main(){
	string line;
	while(getline(cin, line))
		if(line.size()>5)
			cout << line << endl;
}
