#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, m, k;
	cin >> n >> m >> k;

	vector<int>a(n);
	vector<int>b(m);

	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	for(int i=0; i<m; i++){
		cin >> b[i];
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int res = 0;

	for(int i=0; i<n; i++){
		if(a[i]<k){
			for(int j=0; j<m; j++){
				if(b[j] <= k - a[i]){
					res++;
				}
				else
					break;
			}
		}
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