#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


void solve() {
	
	ll n, k, a, b;
	cin >> n >> k >> a >> b;
	a--;
	b--;

	vector<ll>x(n), y(n);
	for(ll i=0; i<n; i++){
		cin >> x[i] >> y[i];
	}

	ll res = abs(x[a] - x[b]) + abs(y[a] - y[b]);

	ll d1 = 1e10, d2 = 1e10;
	for(ll i=0; i<k; i++){
		d1 = min(d1, abs(x[i] - x[a]) + abs(y[i] - y[a]));
		d2 = min(d2, abs(x[i] - x[b]) + abs(y[i] - y[b]));
	}

	res = min(res, d1+d2);

	cout << res << endl;

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
