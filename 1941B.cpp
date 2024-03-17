#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n; 

	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	for(int i=0; i<n-2; i++){
		if(a[i] < 0){
			cout << "No" << endl;
			return;
		}

		int z = a[i];
		a[i] -= z;
		a[i+1] -= 2*z;
		a[i+2] -= z;
	}

	int cnt = 0;

	for(int i=0; i<n; i++){
		if(a[i] == 0){
			cnt++;
		}
	}

	if(cnt == n){
		cout << "Yes" << endl;
		return;
	}
	else {
		cout << "No" << endl;
		return;
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