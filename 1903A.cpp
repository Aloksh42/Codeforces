#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, k;
	cin >> n >> k;

	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	bool ok = is_sorted(a.begin(), a.end());

	if(k > 1 || ok){
		cout << "Yes" << endl;
	}
	else
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