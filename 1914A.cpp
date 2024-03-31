#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	string s;
	cin >> n >> s;

	map<char, int> m;
	for(int i=0; i<n; i++){
		m[s[i]]++;
	}

	int count = 0;

	for(int i=0; i<n; i++){
		int x = s[i];
		if(m[s[i]] >= x - 64){
			count++;
			m[s[i]] = 0;
		}
	}

	cout << count << endl;
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