#include <iostream>
#include <vector>
using namespace std;

int main(){
	string s;
	vector<string> a;
	for(int i = 0; i <3; i++){
		cin >> s;
		a.push_back(s);
		
	}
	for(auto &i :a){
		for(auto &j :i){
			j = toupper(j);
			cout << i << " ";
		}
	}
	
}
