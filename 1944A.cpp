#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, k;
	cin >> n >> k;

	int total = n*(n-1)/2;

	if(k >= total){
		cout << 1 << endl;
		return;
	}

	if(k < n-1){
		cout << n << endl;
		return;
	}
	else {
		cout << 1 << endl;
		return;
	}

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