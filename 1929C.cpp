#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


void solve() {
	
	int k, x, a;
	cin >> k >> x >> a;

	int count = 0;

	for(int i=1; i<=x+1; i++){
		count += (count)/(k-1)+1;
		if(count > a){
		    break;   
		}
	}
    if(count > a){
        cout << "No" << endl;
        return;
    }
    else {
        cout << "Yes" << endl;
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