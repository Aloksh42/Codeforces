#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


void solve() {
	
	ll a, b, r;
	cin >> a >> b >> r;

	if(a < b)
		swap(a, b);

	ll count = 0;
	for (ll i = 62; i >= 0; i--){
        if ((a >> i & 1) && !(b >> i & 1)){
            count++;
            if (count > 1){
                if (r >= (1LL << i)){
                    r -= 1LL << i;
                    a -= 1LL << i;
                    b += 1LL << i;
                }
            }
        }
    }

    cout << abs(a - b) << endl;

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