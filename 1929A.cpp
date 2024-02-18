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
		ll res = 0;

		vector<int> a(n);
		for(auto &x : a){
			cin >> x;
		}

		sort(a.begin(), a.end());
		for(int i=0; i<n-1; i++){
			res += a[i+1] - a[i];
		}

		cout << res << endl;
				
	}


	return 0;
}