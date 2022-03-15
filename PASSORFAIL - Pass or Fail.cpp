#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int N, X, Y, temp, res;
	    cin >> N >> X >> Y;
	    
	    temp = X * 3;
	    res = temp - (N-X);
	    
	    (res >= Y) ? cout << "PASS" << endl : cout << "FAIL" << endl;
	}
	return 0;
}