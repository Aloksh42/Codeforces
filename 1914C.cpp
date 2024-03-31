#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, k;
	cin >> n >> k;

	vector<int>a(n), b(n);

	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	for(int i=0; i<n; i++){
		cin >> b[i];
	}

	int res = 0, maxElement = 0 , sum = 0;

	for(int i=0; i<min(n,k); i++){
		maxElement = max(maxElement, b[i]);
		sum += a[i];
		res = max(res , sum + (k-i-1) * maxElement);
	}

	cout << res << endl;
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