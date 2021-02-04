#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector<int> a;
	for (int i = 0; i <3; i++)
		a.push_back(i);
	
	for(auto i :a)
		cout << i << " ";
	
}
