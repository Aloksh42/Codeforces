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

	for(int i=0; i<n; i++){
		if(i%2 != 0){
			v[i] = 0 - v[i];
		}
	}

	vector<int> pref(n+1, 0);
	for(int i=1; i<=n; i++){
		pref[i] = pref[i-1] + v[i-1];
	}

	sort(pref.begin(), pref.end());
	for(int i=0; i<pref.size()-1; i++){
		if(pref[i] == pref[i+1]){
			cout << "Yes" << endl;
			return;
		}
	}

	cout << "No" << endl;
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