#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	sort(a.begin(), a.end());
	
	int sub = 0, winner = 0;
	for(int i=0; i<n; i++){
		a[i] -= sub;

		if(a[i] == 1){
			winner ^= 1;
			sub += a[i];
		}
		else if(a[i] > 1){
			winner ^= 1;
			break;
		}
	}

	if(winner){
		cout << "Alice" << endl;
	}
	else {
		cout << "Bob" << endl;
	}
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