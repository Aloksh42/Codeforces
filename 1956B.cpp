#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	unordered_map<int, int> mp;
	vector<int> v(n);

	for(int i=0; i<n; i++){
		cin >> v[i];

		mp[v[i]]++;
	}	

	int res = 0;
	for(auto &x: mp){
		if(x.second == 2){
			res++;
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