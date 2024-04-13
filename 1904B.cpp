#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	int sum = 0;

	vector<pair<int, int>> arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i].first;
		arr[i].second = i;
		sum += arr[i].first;
	}

	sort(arr.begin(), arr.end());

	vector<int> res(n);
	res[arr[n-1].second] = n-1;

	sum -= arr[n-1].first;

	for(int i=n-2; i>=0; i--){
		res[arr[i].second] = res[arr[i+1].second];

		if(sum < arr[i+1].first){
			res[arr[i].second] = i;
		}

		sum -= arr[i].first;
	}

	for(int i=0; i<n; i++){
		cout << res[i] << " ";
	}
	cout << endl;
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