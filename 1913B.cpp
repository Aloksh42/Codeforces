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

	while(t--){
		string s;
        cin >> s;
        int c0 = 0, c1 = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '0') {
                c0++;
            } else {
                c1++;
            }
        }
        int cnt = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '0') {
                if (c1 == 0) {
                    break;
                }
                c1--;
                cnt++;
            } else {
                if (c0 == 0) {
                    break;
                }
                c0--;
                cnt++;
            }
        }
        cout << s.size() - cnt << endl;		
	}
	
	return 0;
}