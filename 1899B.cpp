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

	int res = -1;

	for(int i=1; i<=n; i++){
		if(n%i == 0){
			int maxVal = -1e18;
			int minVal = 1e18;

			for(int j=0; j<n; j+=i){
				int sum = 0;
				for(int k=j; k<i+j; ++k){
					sum += a[k];
				}

				maxVal = max(maxVal, sum);
				minVal = min(minVal, sum);
			}

			res = max(res, maxVal-minVal);
		}
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