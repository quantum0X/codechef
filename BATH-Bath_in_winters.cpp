#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X, Y, n, ans;
	    cin >>  X >> Y;
	    
	    if(X < Y)
	        cout << "0" << endl;
	    else{
	        n = Y * 2;
	        ans = X / n ;
	        cout << ans << endl;
	    }
	}
	return 0;
}