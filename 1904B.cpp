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
		
		ll n;
		cin >> n;
		ll sum = 0;

		vector<ll> a(n);
		for(auto &x: a){
			cin >> x;
			sum += x;
		}

		vector<ll> b = a;
		sort(b.begin(), b.end());

		map<ll, ll> m;
		ll prev = 0;
		bool c = false;

		for(ll i=0; i<n; i++){
			sum = sum - b[n-i-1];

			if(c == true){
				m[b[n-i-1]] = prev;
			}
			else {
				m[b[n-i-1]] = n - i - 1;
				prev = n-i-1;
			}

			if(sum >= b[n-i-1]){
				c = true;
			}
			else
				c = false;
		}				
		for(auto &x : a){
			cout << m[x] << " ";
		}

		cout << endl;
	}


	return 0;
}