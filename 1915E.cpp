#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
		if(i&1){
			a[i] = -a[i];
		}
	}

	int sum = 0;
	set<int>s{0};

	for(int i=0; i<n; i++){
		sum += a[i];
		if(s.find(sum) != s.end()){
			cout << "Yes" << endl;
			return;
		}
		s.insert(sum);
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
