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
		cin >> n;
		string s;
		cin >> s;
		unordered_map<char, int> m;
		ll res = (n * (n+1))/2;

		for(int i=0; i<n; i++){
			auto it = m.find(s[i]);
			if(it != m.end()){
				res -= n - i;
			}
			else{
				m[s[i]] = i;
			}
		}

		cout << res << endl;		
	}

	return 0;
}