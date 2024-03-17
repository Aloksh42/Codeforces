#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	if(n <= 10){
		cout << n << endl;
		return;
	}

	int cnt = 0;
	int t = 0;

	while(n/10 > 0){
		n = n/10;
		cnt++;
		t = n*10;
	}

	cout << (9 * cnt + t/10) << endl;

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