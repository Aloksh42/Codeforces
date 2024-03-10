#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, k;
	cin >> n >> k;

	vector<int> a(n);
	for(int i=0;i<n; i++){
		cin >> a[i];
	}

	int res = k;
	for(int i=0; i<n; i++){
		res = min(res, (k - a[i] % k) % k);
	}

	if(k == 4){
		int evenNum = 0;
		for(int i=0; i<n; i++){
			if(a[i]%2 == 0){
				evenNum++;
			}
		}
		if(evenNum >= 2){
			res = 0;
		}
		else if (evenNum == 1) res = min (res, 1ll);
		else res = min (res, 2ll);
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