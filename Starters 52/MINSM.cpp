#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL);

#define ll long long

void solve() {
    long N, X, T;
    cin >> N >> X;
    for(int i=1; i<N; i++) {
        cin >> T;
        X = __gcd(X, T);
    }
    
    cout << X * N << "\n";
}

int main() {
	// your code goes here
	fastIO;
	int T;
	cin >> T;
	while(T--) {
	    solve();
	}
	return 0;
}

