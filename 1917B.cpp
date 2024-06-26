#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	string s;

	cin >> n >> s;

	set<char> str;
	int res = 0;

	for(int i=0; i<n; i++){
		if(str.find(s[i]) == str.end()){
			res += (n-i);
			str.insert(s[i]);
		}
	}	

	cout << res << endl;
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