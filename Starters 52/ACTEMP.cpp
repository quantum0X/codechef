#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL);

int main() {
	// your code goes here
	fastIO;
	int T;
	cin >> T;
	while(T--) {
	    int A, B, C;
	    cin >> A >> B >> C;
	    
	    (A <= B && C <= B) ? cout << "Yes" : cout << "No";
	    cout << "\n";
	}
	return 0;
}
