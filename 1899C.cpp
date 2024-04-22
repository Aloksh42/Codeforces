#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	int res = *max_element(a.begin(), a.end());

	int sum = 0;
	int prev = -1;

	for(int i=0; i<n; i++){
		sum = max(sum, 0ll);

		if(prev == abs(a[i])%2)
			sum = 0;

		sum += a[i];
		prev = abs(a[i])%2;
		res = max(res, sum);
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