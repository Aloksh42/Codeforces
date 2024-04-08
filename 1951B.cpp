#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, k;
	cin >> n >> k;

	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	k--;

	swap(v[0], v[k]);
	int ans1 = 0;
	for(int i=1; i<n; i++){
		if(v[i] < v[0]){
			ans1++;
		}
		else
			break;
	}

	swap(v[0], v[k]);
	int maxVal = 0;
	for(int i=0; i<k; i++){
		if(v[i] > v[k]){
			maxVal = i;
			break;
		}
	}

	int ans2 = 0;
	if(maxVal > 0){
		ans2++;
	}
	swap(v[maxVal], v[k]);
	for(int i=maxVal+1; i<n; i++){
		if(v[i] > v[maxVal])
			break;
		else
			ans2++;
	}

	int ans = max(ans1, ans2);
	cout << ans << endl;
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