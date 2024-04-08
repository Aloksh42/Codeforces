#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}

	int res = 0;

	int low = n+1, high = n+1;

	for(int i=0; i<n; i++){
		if(low > high)
			swap(low, high);

		if(v[i] <= low)
			low = v[i];
		else if(v[i] > high){
			res++;
			low = v[i];
		}
		else
			high = v[i];
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