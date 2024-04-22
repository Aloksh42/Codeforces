#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, k;
	cin >> n >> k;

	vector<int> v(n, 0);

	for (int i = 0; i < n; ++i) {
        if (k >= (1 << (n - i - 1))) {
            v[i] = (1 << (n - i - 1));
            k -= v[i];
        } else {
            v[i] = k;
            break;
        }
    }

	for(int i=0; i<n; i++){
		cout << v[i] << " ";
	}

	cout << endl;
	return;
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