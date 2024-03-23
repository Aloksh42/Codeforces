#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	n = 2*n;

	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int cnt = 0;
	vector<pair<int, int>> res;

	for(int i=0; i<n/2; i++){
		res.push_back({v[i], v[n-i-1]});
	}

	for(int i=0; i<res.size()-1; i++){
		cnt += abs(res[i].first - res[i+1].first);
		cnt += abs(res[i].second - res[i+1].second);
	}

	cout << cnt << endl;
	for(auto x: res){
		cout << x.first << " " << x.second;
		cout << endl;
	}

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