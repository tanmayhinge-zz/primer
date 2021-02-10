#include <bits/stdc++.h>

using namespace std;

int main(){
	char c;
	unsigned aC = 0,bC = 0;
	while(cin>>noskipws>>c){
		
		switch(c){
			
			case 'a':
			case 'A':
				++aC;
				break;
			case ' ':
				++bC;
				break;
				//etc for other cases
			
			
		}
	cout << aC<<endl;
	cout << bC<<endl;		
	}

}
