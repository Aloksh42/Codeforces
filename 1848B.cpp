#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	string s;
	cin >> s;

	int cnt = 0;
	int res = 0;
	for(int i=1; i<s.size(); i++){
		if(s[i-1] != s[i]){
			res = max(res, cnt);
			cnt = 0;
		}
		else {
			cnt++;
		}
	}

	if(res == 0){
		cout << 0 << " " << 1 << endl;
		return;
	}
	else {
		cout << res-1 << " " << (res-1)*res << endl;
		return;
	}

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