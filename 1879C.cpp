#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


int MOD = 998244353;

void solve() {
	
	string s;
	cin >> s;

	int n = s.length();

	int cnt = 0;
	int combinations = 1;

	for(int i=0; i<n;){
		int j = i;
		while(j<n && s[j] == s[i]){
			j++;
		}

		int x = j-i;
		cnt += x-1;

		combinations = (combinations*x)%MOD;
		i = j;
	}

	for(int j=1; j<=cnt; j++){
		combinations = (combinations*j)%MOD;
	}

	cout << cnt << " " << combinations << endl;
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