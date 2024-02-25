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

		vector<int> a(n);
		for(auto &x: a){
			cin >> x;
		}

		ll res = -1;
		for(int j = 1; j <= n; j++){
			if(n % j == 0){
				ll maxVal = -1e18;
				ll minVal = 1e18;
				for(int i=0; i<n; i += j){
					ll sum = 0;
					for (int k = i; k < i + j; ++k) {
	                    sum += a[k];
	                }
	                maxVal = max(maxVal, sum);
	                minVal = min(minVal, sum);
				}

				res = max(res, maxVal - minVal);
			}
		}

		cout << res << endl;
				
	}


	return 0;
}