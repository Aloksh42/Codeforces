#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	string s;

	cin >> n >> s;

	int count1 = 0;

	for(int i=0; i<s.size(); i++){
		if(s[i] == '1'){
			count1++;
		}
	}

	if(count1 >= 4 && count1%2 == 0){
		cout << "YES" << endl;
		return;
	}
	else if(count1 == 2){
		for(int  i=0; i<n; i++){
			if(s[i] == '1' && s[i+1] == '1'){
				cout << "NO" << endl;
				return;
			}
		}
		cout << "YES" << endl;
		return;
	}
	else if(count1 == 0){
		cout << "YES" << endl;
		return;
	}
	else {
		cout << "NO" << endl;
		return;
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