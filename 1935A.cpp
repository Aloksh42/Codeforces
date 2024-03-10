#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	string s;

	cin >> n >> s;
	int l = s.size();

	string sRev = "";
	for(int i=l-1; i>=0; i--){
		sRev += s[i];
	}

	int j = 0, k = l-1;
	while(j<k){
		if(s[j] < s[k]){
			cout << s << endl;
			return;
		}
		else if(s[j] > s[k]){
			cout << sRev + s << endl;
			return;
		}
		else if(s[j] == s[k]){
			j++;
			k--;
		}
	}

	cout << s << endl;
	return;

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
