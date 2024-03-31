#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	string s;
	cin >> s;

	int n = s.size();
	
	int cnt0 = 0;
	int cnt1 = 0;
	for(int i=0; i<n; i++){
		if(s[i] == '0'){
			cnt0++;
		}
		else
			cnt1++;
	}

	for(int i=0; i<n; i++){
		if(s[i] == '1'){
			if(cnt0 > 0){
				cnt0--;
			}
			else{
				cout << n - i << endl;
				return;
			}
		}
		else {
			if(cnt1 > 0){
				cnt1--;
			}
			else {
				cout << n-i << endl;
				return;
			}
		}
	}

	cout << cnt1 << endl;
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