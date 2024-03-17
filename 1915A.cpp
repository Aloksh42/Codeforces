#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int a, b, c;
	cin >> a >> b >> c;

	if(a==b){
		cout << c << endl;
		return;
	}

	if(a==c){
		cout << b << endl;
		return;
	}

	if(b==c){
		cout << a << endl;
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