#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	string s;
	cin >> s;

	int n = s.size();
	for(int i=1; i<n; i++){
		string a = s.substr(0, i);
		string b = s.substr(i, n-i);

		if(a[0]!='0' && b[0]!='0' && stoi(a)<stoi(b) && a+b == s){
			cout << a << " " << b << endl;
			return;
		}
	}
	cout << -1 << endl;
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