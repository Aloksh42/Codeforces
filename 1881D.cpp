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

	map<int, int> mp;

	for(auto x: a){
		for(int i=2; i*i<=x; i++){
			while(x%i == 0){
				mp[i]++;
				x/=i;
			}
		}

		if(x>1){
			mp[x]++;
		}
	}

	int f = 1;
	for(auto &pair: mp){
		if(pair.second%n != 0){
			f = 0;
		}
	}

	if(f){
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
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