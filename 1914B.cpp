#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, k;
	cin >> n >> k;

	vector<int> a;

	for(int i=0; i<k; i++){
		a.push_back(n-i);
	}

	for(int i=1; i<=n-k; i++){
		a.push_back(i);
	}

	reverse(a.begin(), a.end());
	for(auto x: a){
		cout << x << " ";
	}

	cout << endl;

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