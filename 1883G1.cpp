#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, m;
	cin >> n >> m;

	vector<int> a, b(n);
	a.push_back(m);

	for(int i=0; i<n-1; i++){
		int x;
		cin >> x;

		a.push_back(x);
	}

	for(int i=0; i<n; i++){
		cin >> b[i];
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int i = n-1;
	int j = n-1;

	int res = 0;

	while(i>=0 && j>=0){
		if(a[i] >= b[j]){
			res++;
			i--;
		}
		else if(a[i] < b[j]){
			i--;
			j--;
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