#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


void solve() {
	
	int n;
	cin >> n;
	int sum = 0;

	vector<int> a(n);
	for(auto &x : a){
		cin >> x;
		sum += x;
	}

	if(sum % 3 == 0){
		cout << 0 << endl;
		return;
	}

	if(sum % 3 == 2){
		cout << 1 << endl;
		return;
	}

	for(int i=0; i<n; i++){
		int rem = sum - a[i];
		if(rem % 3 == 0){
			cout << 1 << endl;
			return;
		}
	}

	cout << 2 << endl;

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