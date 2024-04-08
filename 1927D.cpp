#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, q;
	cin >> n;

	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}

	vector<int> next(n);
	next[n-1] = n;

	for(int i=n-2; i>=0; i--){
		if(v[i] == v[i+1]){
			next[i] = next[i+1];
		}
		else
			next[i] = i+1;
	}

	cin >> q;
	while(q--){
		int l, r;
		cin >> l >> r;
		l--;
		r--;

		if(next[l] > r){
			cout << -1 << " " << -1 << endl;
		}
		else
			cout << l+1 << " " << next[l] + 1 << endl;;
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