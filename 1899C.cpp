#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector<ll> a(n);
        for(auto &x: a){
            cin >> x;
        }

        ll ans = -1e18, sum = 0;

        for(int i=0; i<n; i++){
        	sum += a[i];

        	ans = max(ans, sum);

        	if((max(a[i], -a[i]))%2 == (max(a[i+1], -a[i+1]))%2)
                sum=0;
 
            if(sum < 0)
            	sum = 0;
        }

        cout << ans << endl;
    }
                    
    return 0;
}
