#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, k;
	cin >> n >> k;

	string s;
	cin >> s;

	map<char, int> m;

	for(int i=0; i<n; i++){
		m[s[i]]++;
	}

	int cnt = 0;

	for(auto &x:m){
		if(x.second % 2 != 0){
			cnt++;
		}
	}

	if(cnt - k <= 1){
		cout << "Yes" << endl;
		return;
	}

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