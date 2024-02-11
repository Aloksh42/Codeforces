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
		
		int n;
		string s;
		cin >> n >> s;
		int res = 0;
		int count = 0;
		bool ok = false;

		for(int i=0; i<n; i++){

			if(s[i] == '.'){
				count++;
				if(count >= 3){
					ok = true;
					break;
				}
			}
			else {
				res += count;
				count = 0;
			}
		}

		if(ok){
			cout << 2 << endl;
		}
		else
			cout << res + count << endl;		
	}

	return 0;
}