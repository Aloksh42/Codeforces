#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	string s;
	cin >> s;

	int n = s.size();

	if(n == 1){
		cout << "1" << endl;
		return;
	}

	int c0 = 0;
	int c1 = 0;
	for(int i=0; i<n; i++){
		if(s[i] == '0'){
			c0++;
		}
		else
			c1++;
	}

	for(int i=0; i<n; i++){
		if(s[i] == '1'){
			if(c0 > 0){
				c0--;
			}
			else{
				cout << n - i << endl;
				return;
			}
		}
		else {
			if(c1 > 0){
				c1--;
			}
			else {
				cout << n-i << endl;
				return;
			}
		}
	}

	cout << c1 << endl;
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