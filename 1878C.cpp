#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, k, x;
	cin >> n >> k >> x;

	int min_sum = (k * (k + 1))/2;
	int total = (n * (n + 1))/2;

	int max_sum = total - ((n-k) * (n-k+1))/2;
	if(x >= min_sum && x <= max_sum)
		cout << "Yes" << endl;
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