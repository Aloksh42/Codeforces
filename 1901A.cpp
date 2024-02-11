#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);


	int t;
	cin >> t;

	while(t--){
		
		int n, x;
		cin >> n >> x;

		vector<int>v(n);
		for(auto &x: v){
			cin >> x;
		}

		int res = 2 * (x-v[n-1]);

		for(int i=0; i<n; i++){
			if(i == 0){
				res = max(res, v[i]);
			}
			else {
				res = max(res, v[i]-v[i-1]);
			}
		}
		cout << res << endl;		
	}


	return 0;
}