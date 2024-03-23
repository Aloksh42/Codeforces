#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	vector<int> a(n);

	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	unordered_map<int,int> mp;
	for(int i=0; i<n; i++){
		mp[a[i]]++;
	}

	int temp = 0;

	for(int i=0; i<=n+1; i++){
		if(mp[i] == 0){
			cout << i << endl;
			return;
		}
		if(mp[i] == 1){
			if(temp == 1){
				cout << i << endl;
				return;
			}
			else
				temp = 1;
		}
	}

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