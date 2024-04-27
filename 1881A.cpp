#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, m;
	cin >> n >> m;

	string x, s;
	cin >> x >> s;

	int res = 0;

	for(int i=0; i<10; i++){
		if(x.find(s) != string::npos){
			cout << res << endl;
			return;
		}

		x += x;
		res++;
	}

	cout << -1 << endl;
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