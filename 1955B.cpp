#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, c, d;
	cin >> n >> c >> d;

	int m = n*n;

	vector<int> v(m);

	for(int i=0; i<m; i++){
		cin >> v[i];
	}

	sort(v.begin(), v.end());
	int smallest = v[0];

	vector<int> res;

	int a = 0;
	int b = 0;

	for(int i=0; i<n; i++){
		a += smallest;
		for(int j=0; j<n; j++){
			res.push_back(a);
			a += d;
		}

		a = 0;
		smallest += c;
	}

	sort(res.begin(), res.end());

	if(v == res){
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

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