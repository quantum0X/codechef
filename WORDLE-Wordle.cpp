#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    string S = "", T = "", res = "";
	    cin >> S;
	    cin >> T;
	    
	    for(int i=0; i<5; i++){
	        if(S[i] == T[i])
	            res += "G";
	        else
	            res += "B";
	    }
	    cout << res << endl;
	}
	return 0;
} 
