#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int a, b, c;
	cin >> a >> b >> c;

	int res = a;
	int x = b%3;
	res += b/3;

	if(x != 0){
		if(3 - x > c){
			cout << -1 << endl;
			return;
		}
		else{
			c = c - (3 - x);
			res = res + 1;
		}
	}

	res += (c + 2) / 3;

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