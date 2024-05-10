#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, m;
	cin >> n >> m;

	vector<string> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}


	for(char c:{'B', 'W'}){
		int row_max = 0, col_max = 0, row_min = 1e9, col_min = 1e9;

		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(v[i][j] == c){
					row_max = max(row_max, i);
					row_min = min(row_min, i);
					col_max = max(col_max, j);
					col_min = min(col_min, j);
				}
			}
		}
		if(col_min == 0 && col_max == m-1 && row_min == 0 && row_max == n-1){
			cout << "Yes" << endl;
			return;
		}
	}

	cout << "No" << endl;
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