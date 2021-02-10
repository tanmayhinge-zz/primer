// playground file to test code

#include <bits/stdc++.h>
using namespace std;

int main(){

	int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

	//for (auto p = ia; p != ia + 3; ++p) {
		// q points to the first element of an array of four ints; that is, q points to an int
		//for (auto q = *p; q != *p + 4; ++q)
			//cout << *q << ' ';
		//cout << endl;
	//}
	
	for(auto p = begin(ia); p!=end(ia); ++p){
		for(auto q = begin(*p); q!= end(*p); ++q){
			cout << *q << " ";
		}
		cout << endl;
		
	}

}
