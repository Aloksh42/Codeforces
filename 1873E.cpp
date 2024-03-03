#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


void solve() {
	
	int n;
	ll x;
	cin >> n >> x;

	vector<ll> a(n);
	for(auto &c: a){
		cin >> c;
	}

	ll start = 0;
	ll end = 2e9;

	while(start < end){
		ll mid = start + (end - start + 1)/2;
		ll total = 0;
		for(ll i=0; i<n; i++){
			if(a[i] < mid){
				total += mid - a[i];
			}
		}

		if(total > x){
			end = mid - 1;
		}
		else
			start = mid;
	}

	cout << start << endl;

}


int main() {

	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	int t = 1;
	cin >> t;

	while(t--){
		solve();		
	}

	return 0;
}