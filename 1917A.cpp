#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	int prod = 1;

	vector<int>a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
		if(a[i] < 0){
			prod *= -1;
		}
		else if(a[i] == 0)
			prod = 0;
	}

	if(prod <= 0){
		cout << 0 << endl;
		return;
	}

	cout << 1 << endl;
	cout << 1 << " " << 0 << endl;
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