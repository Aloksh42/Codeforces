#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, p;
	cin >> n >> p;

	vector<pair<int, int>> v(n);

	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		v[i].second = x;
	}

	for(int i=0; i<n; i++){
		int y;
		cin >> y;
		v[i].first = y;
	}

	sort(v.begin(), v.end());

	int req = n-1;
	int res = p;

	for(int i=0; i<n; i++){
		if(v[i].first <= p){
			int t = min(req, v[i].second);
			req = req - t;
			res += t * v[i].first;
		}
	}

	cout << res + (req)*(p) << endl;
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