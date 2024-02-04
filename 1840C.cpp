#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);


	ll t;
	cin >> t;

	while(t--){
		
		ll n, k, q;
		cin >> n >> k >> q;

		vector<ll> v(n);
		for(auto &x: v){
			cin >> x;
		}

		ll count = 0;
		ll ans = 0;

		for(ll i=0; i<n; i++){
			if(v[i] <= q)
				count++;
			else
				count = 0;

			if(count >= k){
				ans += count - k + 1;
			}
		}

		cout << ans << endl;
	}


	return 0;
}