#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, x, y;
	cin >> n >> x >> y;

	int a = n/x;
	int b = n/y;


	int lcm = (x*y)/(__gcd(x,y));
	int common = n/lcm;

	a -= common;
	b -= common;

	int res = a*(2*n - a + 1)/2 - b*(1+b)/2;

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