#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	string s;
	cin >> s;

	int count = 0, res = 0, f = 0;

	for(int i=0; i<n; i++){
		if(s[i] == '.'){
			res++;
			count++;
		}
		else{
			count = 0;
		}

		if(count == 3){
			f = 1;
		}
	}

	if(f){
		cout << 2 << endl;
		return;
	}
	else{
		cout << res << endl;
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