#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	string s;
	cin >> s;

	set<char> str;
	int ans = 0;

	for(int i=0; i<n; i++){
		ans += str.size();
		str.insert(s[i]);
	}

	cout << ans + str.size() << endl;
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