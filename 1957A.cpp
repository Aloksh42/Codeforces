#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	vector<int> v(n);
	unordered_map<int, int> mp;

	for(int i=0; i<n; i++){
		cin >> v[i];
		mp[v[i]]++;
	}

	if(n < 3){
		cout << 0 << endl;
		return;
	}

	int res = 0;

	for(auto &x: mp){
		res += x.second/3;
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