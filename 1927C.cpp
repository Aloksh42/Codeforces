#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

void solve(){
	int n, m, k;
	cin >> n >> m >> k;

	vector<int> a(n);
	vector<int> b(m);

	for(auto &x: a){
		cin >> x;
	}

	for(auto &y: b){
		cin >> y;
	}

	set<int> s1, s2;
	set<int> s;

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	for(int i=0; i<n; i++){
		if(a[i] <= k){
			s1.insert(a[i]);
		}
	}

	for(int i=0; i<m; i++){
		if(b[i] <= k){
			s2.insert(b[i]);
		}
	}

	if(s1.size() < k/2 || s2.size() < k/2){
		cout << "No" << endl;
		return;
	}

	bool g = true;
	for(int i : s1){
		s.insert(i);
	}

	for(int i : s2){
		s.insert(i);
	}

	for(int i=1; i<=k; i++){
		if(s.find(i) == s.end()){
			cout << "No" << endl;
			return;
		}
	}

	cout << "Yes" << endl;
	return;

}

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);


	int t;
	cin >> t;

	while(t--){
		
		solve();
				
	}


	return 0;
}