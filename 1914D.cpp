#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	vector<pair<int, int>>a(n), b(n), c(n);
	int res = 0;

	for(int i=0; i<n; i++){
		int x;
		cin >> x;

		a[i] = {x, i};
	}
	for(int i=0; i<n; i++){
		int x;
		cin >> x;

		b[i] = {x, i};
	}
	for(int i=0; i<n; i++){
		int x;
		cin >> x;

		c[i] = {x, i};
	}

	sort(a.rbegin(), a.rend());
	sort(b.rbegin(), b.rend());
	sort(c.rbegin(), c.rend());

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			for(int k=0; k<3; k++){
				if(a[i].second == b[j].second || b[j].second == c[k].second || c[k].second == a[i].second){
					continue;
				}
				else {
					res = max(res, a[i].first +b[j].first + c[k].first);
				}
			}
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