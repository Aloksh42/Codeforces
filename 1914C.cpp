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
		
		int n, k;
		cin >> n >> k;

		vector<int> a(n);
		vector<int> b(n);

		for(auto &x: a){
			cin >> x;
		}

		for(auto &x: b){
			cin >> x;
		}

		int res = 0, sum = 0, mx = 0;

        for (int i = 0; i < min(n, k); ++i) {
            sum += a[i];
            mx = max(mx, b[i]);
            res = max(res, sum + mx * (k - i - 1));
        }

        cout << res << endl;
	}


	return 0;
}