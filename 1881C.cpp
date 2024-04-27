#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	vector<string> s(n);
	for(int i=0; i<n; i++){
		cin >> s[i];
	}

	int res = 0;
	vector<char> v;

	for(int i=0; i<n/2; i++){
		for(int j=0; j<n/2; j++){
			v.clear();

			v.push_back(s[i][j]);
			v.push_back(s[j][n-i-1]);
			v.push_back(s[n-i-1][n-j-1]);
			v.push_back(s[n-j-1][i]);

			sort(v.begin(), v.end());
			for(auto &x: v){
				res += v.back()-x;
			}
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