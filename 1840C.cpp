#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, k, q;
	cin >> n >> k >> q;

	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	int res = 0;
	int count = 0;
	int x = 0, y=0;

	for(int i=0; i<n; i++){
		if(a[i] <= q){
			count++;
			y++;
		}
		else {
			if(y-x >= k){
				res += ((count - k + 1)*(count - k + 2))/2;
			}
			x = 0;
			y = 0;
			count = 0;
		}
	}


	if(y-x >= k){
		res += ((count - k + 1)*(count - k + 2))/2;
	}

	cout << res << endl;

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