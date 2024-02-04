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
		
		int n, p;
		cin >> n >> p;

		vector<pair<int, int>> vec(n);

		for(int i=0; i<n; i++){
			cin >> vec[i].second;
		}	

		for(int i=0; i<n; i++){
			cin >> vec[i].first;
		}

		sort(vec.begin(), vec.end());

		int req = n - 1;
		ll ans = p;

		for(int i=0; i<n; i++){
			if(vec[i].first <= p){
				int t = min(req, vec[i].second);
				req -= t;
				ans += (ll)t * vec[i].first;
			}
		}

		cout << ans + (ll)req * p << endl;
	}


	return 0;
}