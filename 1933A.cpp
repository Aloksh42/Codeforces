#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


void solve() {
	
	int n;
	cin >> n;

	int sum = 0;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		sum += abs(x);
	}

	cout << sum << endl;

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