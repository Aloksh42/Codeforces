#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	vector<int> a(n);

	int zero = 0;
	int neg = 0;

	for(int i=0; i<n; i++){
		cin >> a[i];
		if(a[i] == 0){
			zero++;
		}
		else if(a[i] < 0){
			neg++;
		}
	}

	if(neg % 2 || zero){
		cout << 0 << endl;
		return;
	}

	cout << 1 << endl;
	cout << 1 << " " << 0 << endl;
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