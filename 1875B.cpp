#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, m, k;
	cin >> n >> m >> k;

	vector<int>J(n);
	vector<int>G(m);

	int JSum = 0;

	for(int i=0; i<n; i++){
		cin >> J[i];
		JSum += J[i];
	}

	for(int i=0; i<m; i++){
		cin >> G[i];
	}

	sort(J.begin(), J.end());
	sort(G.begin(), G.end());

	int maxVal = max(J[n-1], G[m-1]);
	int minVal = min(J[0], G[0]);

	if(J[0] < G[m-1]){
		JSum -= J[0];
		JSum += G[m-1];
	}

	if(k%2 == 0){
		JSum -= maxVal;
		JSum += minVal;
	}

	cout << JSum << endl;
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