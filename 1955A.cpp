#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, a, b;
	cin >> n >> a >> b;

	int res = 0;

	if(n%2 == 0){
		if(2*a > b){
			res += b*(n/2);
		}
		else{
			res += a*n;
		}
	}
	else {
		res += a;
		n--;
		if(2*a > b){
			res += b*(n/2);
		}
		else{
			res += a*n;
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