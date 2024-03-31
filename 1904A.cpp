#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int a, b;
	cin >> a >> b;

	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	set<pair<int, int>> s1, s2;

	s1.insert({x1+a, y1-b});
	s1.insert({x1-a, y1-b});
	s1.insert({x1+a, y1+b});
	s1.insert({x1-a, y1+b});
	s1.insert({x1+b, y1-a});
	s1.insert({x1+b, y1+a});
	s1.insert({x1-b, y1+a});
	s1.insert({x1-b, y1-a});

	s2.insert({x2+a, y2-b});
	s2.insert({x2-a, y2-b});
	s2.insert({x2+a, y2+b});
	s2.insert({x2-a, y2+b});
	s2.insert({x2+b, y2-a});
	s2.insert({x2+b, y2+a});
	s2.insert({x2-b, y2+a});
	s2.insert({x2-b, y2-a});

	int ans = 0;

	for(auto x: s1){
		if(s2.find(x) != s2.end()){
			ans++;
		}
	}

	cout << ans << endl;
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