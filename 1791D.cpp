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

	    vector<int> cnt(26, 0), p(26, 0);

	    for(auto x: s)
	    	cnt[x - 'a']++;

	    int ans = 0;
	    for(auto x: s){
	        cnt[x - 'a']--;
	        p[x - 'a']++;

	        int cur = 0;
	        for(int i = 0; i < 26; ++i) {
	            cur += min(1, cnt[i]) + min(1, p[i]);
	        }
	        ans = max(ans, cur);
	    }
	    cout << ans << endl;
	}

	return 0;
}