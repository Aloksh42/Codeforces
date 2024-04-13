#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	int minEle = 1e9, sum = 0;

	vector<int> elements;

	for(int i=0; i<n; i++){
		int m;
		cin >> m;

		vector<int> v(m);
		for(int i=0; i<m;  i++){
			cin >> v[i];

			minEle = min(minEle, v[i]);
		}

		sort(v.begin(), v.end());

		elements.push_back(v[1]);
	}

	sort(elements.begin(), elements.end());

	for(int i=1; i<elements.size(); i++){
		sum += elements[i];
	}

	sum += minEle;
	
	cout << sum << endl;
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