#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, k;
	cin >> n >> k;

	vector<int> v(n);
	map<int, int> mp;

	for(int i=0; i<n; i++){
		cin >> v[i];
		mp[v[i]]++;
	}

	if(n<k){
		cout << n << endl;
		return;
	}

	for(auto &pair: mp){
		if(pair.second >= k){
			cout << k-1 << endl;
			return;
		}
	}

	cout << n << endl;
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