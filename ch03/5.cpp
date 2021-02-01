#include <iostream>
using namespace std;
int main(){
	string a,s;
	while(getline(cin, s)){
		a += (s + " ");
		cout << a << endl;
	}
	return 0;
}
