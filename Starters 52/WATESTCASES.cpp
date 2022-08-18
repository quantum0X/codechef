#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL);

int main() {
	// your code goes here
	fastIO;
	int T;
	cin >> T;
	while(T--) {
	    int N;
	    cin >> N;
	    
	    int S[N];
	    for(int i=0; i<N; i++) cin >> S[i];
	    
	    string V;
	    cin >> V;
	    
	    int temp = INT_MAX;
	    
	    for(int i=0; i<N; i++) {
	        if(V[i] == '0')
	            temp = min(temp, S[i]);
	        
	    }
	    
	    cout << temp << "\n";
	    
	}
	return 0;
}
