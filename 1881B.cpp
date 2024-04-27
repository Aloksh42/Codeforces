#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int a, b, c;
	cin >> a >> b >> c;

	int min_ele = min(a, min(b,c));

	vector<int> v;

	if(a%min_ele != 0 || b%min_ele != 0 || c%min_ele != 0){
		cout << "No" << endl;
		return;
	}

	int sum = 0;

	sum += a/min_ele;
	sum += b/min_ele;
	sum += c/min_ele;

	if(sum <= 6){
		cout << "Yes" << endl;
		return;
	}
	else {
		cout << "No" << endl;
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