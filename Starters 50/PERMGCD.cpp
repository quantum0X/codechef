#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
	cin >> T;
	while(T--) {
	    int N, X;
	    cin >> N >> X;
	    
	    if(X < N)
	        cout << -1 << "\n";
	    else if(X == N){
	        for(int i=1; i<=N; i++) 
	            cout << i << " ";
	        cout << "\n";
	    }
	    else{
	        cout << X - N + 1 << " ";
	        for(int i=1; i<=N; i++) {
	            if(i != X-N+1)
	                cout << i << " ";
	        }
	        
	    cout << "\n";
	        
	    }
	}
	return 0;
}
