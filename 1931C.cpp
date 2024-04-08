#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	vector<int> a(n);
	for(auto &x: a){
		cin >> x;
	}

	int l = 0, r = 0;

	for(int i=0; i<n; i++){
		if(a[i] == a[0])
			l++;
		else
			break;
	}

	for(int i=n-1; i>=0; i--){
		if(a[i] == a[n-1])
			r++;
		else
			break;
	}

	if(l == n){
		cout << 0 << endl;
		return; 
	}
	else if(a[0] == a[n-1]){
		cout << n - l - r << endl;
		return;
	}
	else{
		cout << min(n-l, n-r) << endl;
		return;
	}

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