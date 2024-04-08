#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, k;
	cin >> n >> k;

	int maxVal = 0;

	vector<int> v(n);
	for(int i=0; i<n; i++){
		int a;
		cin >> a;
		v[i] = a%k;

		maxVal = max(maxVal, v[i]);
	}

	int cnt2 = 0, cnt3 = 0;
	for(int i=0; i<n; i++){
		if(v[i] == 0){
			cout << 0 << endl;
			return;
		}
		else if(v[i] == 2){
			cnt2++;
		}
		else if(v[i] == 3){
			cnt3++;
		}
	}

	if(k == 4){
		if(cnt2 == 0){
			int z = (cnt3 > 0)? 1 : 2;
			cout << z << endl;
		}
		else if(cnt2 == 1){
			cout << 1 << endl;
		}
		else{
			cout << 0 << endl;
		}

		return;
	}
	else {
		cout << k - maxVal << endl;
		return;
	}
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