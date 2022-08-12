#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL);

int main() {
	// your code goes here
	fastIO;
	int T;
	cin >> T;
	while(T--) {
	    int X;
	    cin >> X;
	    if(X <= 100)
	        cout << X;
	    else if(X <= 1000)
	        cout << X - 25;
	    else if(X <=5000)
	        cout << X - 100;
	    else
	        cout << X - 500;
	    
	    cout << "\n";
	}
	return 0;
}
