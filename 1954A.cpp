#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, m, k;
	cin >> n >> m >> k;

	int d = n/m;
	int t = n%m;

	int b = max(t-1,0LL);

    if((m-1) * d + b > k)
    	cout << "Yes" << endl;
    else
    	cout << "No" << endl;

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