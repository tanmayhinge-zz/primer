#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> ivec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    for (auto i : ivec) {
        cout << ((i & 1) ? i * 2 : i) << " ";
    }
    //0 0 1 1 
    //1 0 1 0
    //-------	   2->0010
    //0 0 1 0      3->0011
    cout << endl;
    
    return 0;
}
