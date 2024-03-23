#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int x, y, k;
	cin >> x >> y >> k;

	if(x > y){
		cout << x << endl;
		return;
	}

	if(abs(x-y) <= k){
		cout << y << endl;
		return;
	}
	else {
		cout << (y + (y-(x+k))) << endl;
		return;
	}

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