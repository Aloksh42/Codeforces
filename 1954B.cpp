#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}

	unordered_map<int, int> mp;

	for(int i=0; i<n; i++){
		mp[v[i]]++;
	}

	if(mp.size() == 1){
		cout << -1 << endl;
		return;
	}

	int first = v[0];
	int count = 0;
	int res = n;

	for(int i=0; i<n; i++){
		if(v[i] == first){
			count++;
		}
		else {
			res = min(res, count);
			count = 0;
		}
	}

	cout << min(res, count) << endl;
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