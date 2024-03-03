#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, k;
	cin >> n >> k;

    vector<int>a(n);
    for (int i = 0; i < n; ++i){
        cin>>a[i];
    }

    int l = 1;
    int r = 1e9;

    while(l<=r){
        int m = (l+r)/2;
        int sum = 0;

        for (int i = 0; i < n; ++i){
            sum += (a[i]+2*m)*(a[i]+2*m);
            if (sum > k) break;
        }

        if(sum==k){
            cout<<m<<endl;
            break;
        }

        if(sum>k){
            r = m-1;
        }
        
        else{
            l = m + 1;
        }
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