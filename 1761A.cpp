#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, a, b;
	cin >> n >> a >> b;

	if((a + b + 2 <= n) || (a == b && b == n)){
		cout << "Yes" << endl;
	}
	else
		cout << "No" << endl;
	return;
}


int32_t main() {

	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while(t--){
		solve();		
	}

	return 0;
}