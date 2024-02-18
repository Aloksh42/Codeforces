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
	
		int n, x, y;
		cin >> n >> x >> y;

		vector<int> a(n);
		for(auto &x: a){
			cin >> x;
		}	


		ll res = 0;
		map<pair<int, int>, int> m;

		for(auto &t:a){
			int xMod = (x - (t % x) ) % x;
			int yMod = t % y;
			res += m[{xMod, yMod}];
			m[{t % x, t % y}]++;
		}

		cout << res << endl;
	}

	return 0;
}