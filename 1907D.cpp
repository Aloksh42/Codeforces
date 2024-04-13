#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	vector<pair<int, int>> vp;
	for(int i=0; i<n; i++){
		int a, b;
		cin >> a >> b;

		vp.push_back({a, b});
	}

	int res = 1e9, low = 0, high = 1e9, mid;

	auto check = [&](int k){
		int x = 0, y = 0;

		for(auto [a, b]: vp){
			x -= k;
			y += k;

			x = max(x, a);
			y = min(y, b);

			if(x > y)
				return false;
		}

		return true;
	};


	while(low <= high){
		int mid = low + (high - low)/2;

		if(check(mid)){
			res = mid;
			high = mid - 1;
		}
		else {
			low = mid + 1;
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