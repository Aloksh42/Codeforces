#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


void solve() {
    int n, k;
    cin >> n >> k;

    int a = 4 * n - 2;
    if(k == a){
        cout << 2 * n << endl;
        return;
    }

    int ans = k / 2 + k % 2;
    cout << ans << endl;

    return;

}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin >> t;

    while(t--){
        solve();
    }


    return 0;
}