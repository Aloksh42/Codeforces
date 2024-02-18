#include <bits/stdc++.h>
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
        int n;
        cin >> n;

        vector<char> a(27);
        char c = 'a';
        for (int i = 1; i <= 26; i++) {
            a[i] = c++;
        }

        if (n <= 28) {
            int rem = n - 2;
            cout << "a" << "a" << a[rem] << endl;
        } else if (n <= 53) {
            n -= 26;
            int rem = n - 1;
            cout << "a" << a[rem] << "z" << endl;
        } else {
            n -= 52;
            cout << a[n] << "z" << "z" << endl;
        }
    }

    return 0;
}
