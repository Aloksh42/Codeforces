#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	vector<int> v;
	int ans = 0;
	int mi = 1e18;

	for(int i=0; i<n; i++){
		int x;
		cin >> x;

		vector<int> v1;
		for(int i=0; i<x; i++){
			int y;
			cin >> y;

			v1.push_back(y);
		}

		sort(v1.begin(), v1.end());
		mi = min(mi, v1[0]);
		v.push_back(v1[1]);
	}

	sort(v.begin(), v.end());
	ans += mi;
	for(int i=1; i<v.size(); i++){
		ans += v[i];
	}

	cout << ans << endl;

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