#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	int res = 2;

	vector<int> a(n);
	
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	while(true){
		set<int> s;

		for(int i=0; i<n; i++){
			s.insert(a[i]%res);
		}

		if(s.size() == 2){
			cout << res << endl;
			return;
		}

		res *= 2;
	}
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