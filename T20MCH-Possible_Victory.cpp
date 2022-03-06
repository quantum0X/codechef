#include <iostream>
using namespace std;

int main() {
	int R, O, C, ro, tr, rr;
	cin >> R >> O >> C;
	
	ro = 20 - O;
	tr = ro * 36;
	rr = tr + C;
	
	if(rr > R)
	    cout << "YES" << endl;
	else
	    cout << "NO" << endl;
	return 0;
}
