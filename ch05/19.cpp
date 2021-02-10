#include <iostream>
using namespace std;
int main()
{
    string a,b;
    do{
		cin >> a>>b;
		if(a.size()<b.size())
			cout << "a";
		else if(b.size()<a.size())
			cout << "b";
		else
			cout <<"equal";
	}
	while(!(1==2));
}
