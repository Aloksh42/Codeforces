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
		
		ll n, k, b, s;
		cin >> n >> k >> b >> s;

		vector<ll> a(n);
		a[0] = k * b;

		s -= k * b;

		if(s < 0){
			cout << "-1" << endl;
		}
		else {
			for(ll i=0; i<n; i++){
				ll curr = min(k-1, s);
				a[i] += curr;
				s -= curr;
			}

			if(s > 0)
				cout << "-1" << endl;
			else {
				for(ll i=0; i<n; i++){
					cout << a[i] << " ";
				}
				cout << endl;
			}
		}			
	}

	return 0;
}