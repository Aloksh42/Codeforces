#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, m;
	cin >> n >> m;

	vector<int> a(n);
	for(auto &x: a){
		cin >> x;
	}

	vector<int> zeroes;
	int total = 0;

	for(int i=0; i<n; i++){
		int s = a[i];
		
		int cnt = 0;
		while(s % 10  == 0){
			cnt++;
			s/=10;
			total++;
		}

		while(s){
			total++;
			s/=10;
		}

		zeroes.push_back(cnt);
	}

	sort(zeroes.begin(), zeroes.end(), greater<int>());

	for(int i=0; i<zeroes.size(); i++){
		if(i%2 == 0){
			total -= zeroes[i];
		}
	}

	if(total <= m)
		cout << "Anna" << endl;
	else
		cout << "Sasha" << endl;
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