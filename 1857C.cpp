#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	int m = n*(n-1)/2;
	vector<int> b(m);

	for(int i=0; i<m; i++){
		cin >> b[i];
	}

	sort(b.begin(), b.end());

	for(int i=0; i<m; i+=--n){
		cout << b[i] << " ";
	}

	cout << "1000000000" << endl;
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