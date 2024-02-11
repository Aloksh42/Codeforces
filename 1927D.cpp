#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> next(n, n);
        next[n - 1] = n;
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] == a[i + 1]) next[i] = next[i + 1];
            else next[i] = i + 1;
        }

        int q;
        cin >> q;

        while (q--) {
            int l, r;
            cin >> l >> r;
            l--, r--;

            if (next[l] > r) cout << -1 << " " << -1 << endl;
            else cout << l + 1 << " " << next[l] + 1 << endl;
        }
    }
    
    return 0;
}