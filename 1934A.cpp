#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


void solve() {
	
	int n;
	cin >> n;

	vector<int> a(n);
	for(auto &x: a){
		cin >> x;
	}

	sort(a.begin(), a.end());

	int res = abs(a[n-1] - a[0]) + abs(a[n-1] - a[1]) + abs(a[n-2] - a[0]) + abs(a[n-2] - a[1]);

	cout << res << endl;

}


int32_t main(){

	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while(t--){
		solve();		
	}

	return 0;
}