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
		
		int n;
		cin >> n;
		ll ans = 0;

		int f = INT_MAX;
		int s = INT_MAX;

		for(int i=1; i<=n; i++){
			int m;
			cin >> m;

			vector<int>v(m+1);
			for(int j=1; j<=m; j++){
				cin >> v[j];
			}

			sort(v.begin(), v.end());
			f = min(f, v[1]);

			s = min(s, v[2]);
			ans += v[2];
		}

		cout << ans - s + f << endl;			
	}


	return 0;
}