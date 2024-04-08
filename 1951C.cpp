#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, m, k;
	cin >> n >> m >> k;

	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int prev = 0;
	int res = 0;

	for(int i=0; i<n; i++){
		if(k <= 0){
			break;
		}

		res += (v[i] * min(k, m)) + (prev*min(m, k));
		k -= m;

		prev += m;
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