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

	while(t--) {

		int n;
        char c; 
        string s;

        cin >> n >> c >> s;

        n *= 2;
        s += s;

        int res = -1;
        if(c == 'g') {
            cout << 0 << endl;
            continue;
        }
        for(int i = 0; i < n; i++) {
            if(s[i] != c)
            	continue;
            
            int j = i;
            while(j < n && s[j] != 'g')++j;
 
            if(j < n) {
                res = max(res, j - i);
                i = j;
            }
            else i = j-1;
        }
 
        cout << res << endl;
    }

	return 0;
}