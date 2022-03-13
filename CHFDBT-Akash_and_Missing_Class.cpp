#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int N;
	    cin >> N;
	    
	    if(N%7 >= 6)
	        cout << (N/7) + 1 << endl;
	    else
	        cout << N/7 << endl;
	}
	return 0;
}
