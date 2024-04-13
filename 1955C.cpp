#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, k;
	cin >> n >> k;

	vector<int> v(n);

	for(auto &x: v)cin >> x;
	

	int total_sum = accumulate(v.begin(), v.end(), 0ll);
	if(total_sum <= k){
		cout << n << endl;
		return;
	}

	int res = 0;
	int temp = (k+1)/2;

	for(int i=0; i<n; i++){
		if(v[i] > temp)
			break;

		temp -= v[i];
		res++;
	}

	temp = k/2;

	for(int i = n-1; i>=0; i--){
		if(v[i] > temp)
			break;
		temp -= v[i];
		res++;
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