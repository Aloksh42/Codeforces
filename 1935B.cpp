#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	vector<int> a(n), prefix(n), suffix(n);

	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	set<int> s;
	int b = 0;

	for(int i=0; i<n; i++){
		s.insert(a[i]);
		while(s.count(b))
			b++;
		prefix[i] = b;
	}

	s.clear();
	b = 0;

	for(int i=n-1; i>=0; i--){
		s.insert(a[i]);
		while(s.count(b))
			b++;
		suffix[i] = b;
	}

	vector<pair<int, int>> res;
	for(int i=0; i<n-1; i++){
		if(prefix[i] == suffix[i+1]){
			res.push_back({1, i+1});
			res.push_back({i+2, n});
			break;
		}
	}

	if(res.size() == 0)
		cout << "-1" << endl;
	else {
		cout << 2 << endl;
		for(int i=0; i<res.size(); i++){
			cout << res[i].first << " " << res[i].second << endl;
		}
	}

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