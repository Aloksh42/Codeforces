#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, p;
	cin >> n >> p;

	vector<int> a(n), b(n);

	for(int i=0; i<n; i++){
		cin >> a[i];
	}	

	for(int i=0; i<n; i++){
		cin >> b[i];
	}

	vector<pair<int, int>> vp;
	for(int i=0; i<n; i++){
		vp.push_back({b[i], a[i]});
	}

	sort(vp.begin(), vp.end());

	int res = 0;
	res += p;
	int cnt = n-1;

	for(int i=0; i<vp.size(); i++){
		if(vp[i].first <= p){
			res += min(vp[i].second, cnt)*vp[i].first;
			cnt -= min(vp[i].second, cnt);
		}

		if(cnt <= 0){
			break;
		}
	}

	if(cnt > 0){
		res += cnt*p;
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