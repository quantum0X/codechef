#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL);

int main() {
	// your code goes here
	fastIO;
	int T;
	cin >> T;
	while(T--) {
	    int A, B;
	    int isWrong=true;
	    cin >> A >> B;
	    
	    if(A == B) {
            cout << "YES\n"; 
            continue;
	    }
            
	    if(A > B)
	        swap(A, B);
	        
        while(A <= B) {
            if(A == B){
                cout << "YES\n";
                isWrong = false;
            }
            
            A *= 2;
	    }
	    if(isWrong == true) cout << "NO\n";
	}
	return 0;
}
