#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, k;
	cin >> n >> k;

	vector<int> a(n), temp;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	int minVal = a[0];

	if(k > 2){
		cout << 0 << endl;
		return;
	}

	if(k == 1){
		for(int i=0; i<n-1; i++){
			minVal = min(minVal, abs(a[i]-a[i+1]));
		}

		cout << minVal << endl;
		return;
	}
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			int x = a[j]-a[i];

			minVal = min(minVal, x);
			int k = lower_bound(a.begin(), a.end(), x) - a.begin();

			if(k < n)
				minVal = min(minVal, a[k]-x);

			k--;

			if(k >= 0)
				minVal = min(minVal, x-a[k]);
		}
	}
	cout << minVal << endl;
	
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