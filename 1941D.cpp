#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, m, x;
	cin >> n >> m >> x;

	vector<pair<int, char>>v(m);

	for(int i=0; i<m; i++){
		int a;
		char b;

		cin >> a >> b;
		v[i] = make_pair(a, b);
	}

	set<int> s;
	s.insert(x);

	for(int i=0; i<m; i++){
		set<int>temp;

		for(int x: s){
			if(v[i].second == '?'){
				temp.insert((x + v[i].first - 1) % n + 1);
				temp.insert((x - v[i].first - 1 + n) % n + 1);
			}
			else if(v[i].second == '0'){
				temp.insert((x + v[i].first - 1) % n + 1);
			}
			else{
				temp.insert((x - v[i].first - 1 + n) % n + 1);
			} 
		}

		s = temp;
	}

	cout << s.size() << endl;
	for(int y : s){
		cout << y << " ";
	}

	cout << endl;
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