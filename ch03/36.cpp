#include <bits/stdc++.h>

using namespace std;


bool compare(int* const pb1, int* const pe1, int* const pb2, int* const pe2){

	//size check
	if((pe1-pb1)!=(pe2-pb2))
		return false;
	//value check
	else{
		for(int* i = pb1, *j = pb2; (i != pe1) && (j != pe2); ++i, ++j)
			if(*i!=*j) return false;
		
	}
	return true;
	
}


int main(){
	
	// for eg. just for array of size 4
	int a[] = {1,2,3,4};
	int b[] = {1,2,3,3};
	
	if(compare(begin(a),end(a),begin(b),end(b)))
		cout << "Equal";
	else
		cout<<"Unequal";

}
