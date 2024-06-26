#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, k;
	cin >> n >> k;

	vector<pair<int, int>> vp(n);
	for(int i=0; i<n; i++){
		int x;
		cin >> x;

		x %= k;

		if(x == 0){
			x += k;
		}

		vp[i] = {-x, i};
	}

	sort(vp.begin(), vp.end());
	for(auto &pair: vp){
		cout << pair.second + 1<< " ";
	}

	cout << endl;
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