#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int k, q;
	cin >> k >> q;

	vector<int> a(k), n(q);

	for(int i=0; i<k; i++){
		cin >> a[i];
	}	

	for(int i=0; i<q; i++){
		cin >> n[i];
	}

	vector<int> res;

	for(int i=0; i<q; i++){
		if(n[i] >= a[0]){
			res.push_back(a[0]-1);
		}
		else {
			res.push_back(n[i]);
		}
	}

	for(auto &z: res){
		cout << z << " ";
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