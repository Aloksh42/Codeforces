#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n; 

	string s;
	cin >> s;

	int res = 0;

	for(int i=0; i <n-2; i++){
		if((s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p') || (s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e')){
			res++;
			i += 2;
		}
	}

	cout << res << endl;

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