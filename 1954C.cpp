#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	string x, y;
	cin >> x >> y;

	int n = x.size();

	bool ok = false;

	if(x < y){
		swap(x, y);
	}

	for(int i=0; i<n; i++){
		if(x[i] > y[i] && ok){
			swap(x[i], y[i]);
		}

		if(x[i] != y[i]){
			ok = true;
		}
	}

	cout << x << endl;
	cout << y << endl;
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