#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	string s;
	cin >> s;

	cout << s[0];
	for(int i=1; i<n-1; i++){
		if(s[i] == 'a' || s[i] == 'e'){
			cout << s[i];
		}
		else {
			if(s[i+1] == 'a' || s[i+1] == 'e'){
				cout << "." << s[i];
			}
			else {
				cout << s[i];
			}
		}
	}

	cout << s.back();
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