#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);


	int t;
	cin >> t;

	while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int ans = 1e9;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % k == 0) ans = 0;
            ans = min(ans, k - a[i] % k);
        }
        if (k == 4) {
            int f = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] % 2 == 0) {
                    f++;
                }
            }
            if (f < 2) {
                cout << min(2 - f, ans) << endl;
                continue;
            }
            else {
                cout << 0 << endl;
                continue;
            }
        }
        cout << ans << endl;
    }

	return 0;
}