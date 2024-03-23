#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n, k;
	cin >> n >> k;

	vector<int> a(2*n);
	for(int i=0; i<2*n; i++)
		cin >> a[i];

	map<int, int> m;

	for(int i=0; i<n; i++){
		m[a[i]]++;
	}

	vector<int> both, onlyA, onlyB;

	for(int i=1; i<=n; i++){
		if(m[i] == 2){
			onlyA.push_back(i);
		}
		else if(m[i] == 0){
			onlyB.push_back(i);
		}
		else
			both.push_back(i);
	}

	vector<int>ans1, ans2;
	for(int i=0; i<k; i++){
		if(onlyA.size() >= 1 && onlyB.size() >= 1){
			ans1.push_back(onlyA.back());
			ans1.push_back(onlyA.back());

			onlyA.pop_back();

			ans2.push_back(onlyB.back());
			ans2.push_back(onlyB.back());
			onlyB.pop_back();
		}
		else if(both.size() >= 2){
			ans1.push_back(both.back());
			ans2.push_back(both.back());

			both.pop_back();

			ans1.push_back(both.back());
			ans2.push_back(both.back());
			both.pop_back();

		}
		else
			return;
	}

	for(int i=0; i<2*k; i++){
		cout << ans1[i] << " ";
	}
	cout << endl;

	for(int i=0; i<2*k; i++){
		cout << ans2[i] << " ";
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