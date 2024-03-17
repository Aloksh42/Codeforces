#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int a, b, n;
	cin >> a >> b >> n;

	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}

	int res = b;
	for(int i=0; i<n; i++){
		res += min(v[i], a-1);
	}

	cout << res << endl;

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