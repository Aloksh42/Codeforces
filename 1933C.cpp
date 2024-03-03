#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


void solve() {
	
	int a, b, l;
	cin >> a >> b >> l;
	unordered_set<int>s;

	for(int i=0; pow(a,i) <= l; i++){
		for(int j=0; pow(b,j) <= l; j++){
			int val = pow(a,i) * pow(b,j);
			if(l % val == 0){
				int m = l/val;
				s.insert(m);
			}
		}
	}
	cout << s.size() << endl;
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