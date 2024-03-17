#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	vector<string>s(3);

	for(int i=0; i<3; i++){
		cin >> s[i];
	}

	set<char> st = {'A', 'B', 'C'};

	for(int i=0; i<3; i++){
		set<char> temp = st;
		for(int j=0; j<s[i].size(); j++){
			if(temp.find(s[i][j]) != temp.end()){
				temp.erase(s[i][j]);
				continue;
			}
		}

		if(!temp.empty()){
			for(auto el : temp){
				cout << el << endl;
				return;
			}
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