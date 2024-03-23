#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	string s;

	cin >> n >> s;

	vector<int> pre(n+1);
	for(int i=0; i<n; i++){
		pre[i+1] = pre[i] + s[i] - '0';
	}

	int j = -1;
	for(int k = 0; k<=n; k++){
		int left = k - pre[k];
		int right = pre[n] - pre[k];
		if(left*2 >= k && right*2 >= n-k){
			if(j == -1 || abs(n-2*k) < abs(n-2*j)){
				j = k;
			}
		}
	}
	cout << j << endl;
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