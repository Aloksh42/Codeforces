#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, x, y;
	cin >> n >> x >> y;

	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	int res = 0;

	map<pair<int, int>, int> mp;

	for(int i=0; i<n; i++){
		int s = (x-(a[i]%x))%x;
		int d = a[i]%y;

		if(mp[{s,d}]){
			res += mp[{s,d}];
		}

		mp[{a[i]%x, a[i]%y}]++;
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