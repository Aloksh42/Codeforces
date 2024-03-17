#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, k, d;
	cin >> n >> k >> d;

	vector<int> a(n), v(k);

	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	for(int i=0; i<k; i++){
		cin >> v[i];
	}

	int ans = 0;

	auto update = [&](int index){
        for(int i = 0; i < v[index]; i++) a[i]++;
    };

    auto find = [&](vector<int>&a){
        int count = 0;
        for(int i = 0; i < n; i++) count += (a[i] == i + 1);
        return count;
    };

    for(int i = 0; i < min(2 * n, d); i++){
        int currEqual = find(a);
        ans = max(ans, currEqual + (d - (i + 1)) / 2);
        update(i % k);
    }

	cout << ans << endl;
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