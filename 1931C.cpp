#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

void solve(){
	int n;
	cin >> n;

	vector<int> v(n);
	for(auto &x: v){
		cin >> x;
	}

	if(n == 1){
		cout << "0" << endl;
		return;
	}

	int l = 0;
	int r = n - 1;

	while(v[l] == v[0]){
		l++;
	}

	while(v[r] == v[n-1]){
		r--;
	}

	if(v[0] != v[n-1]){
		cout << min(n - l, r + 1) << endl;
		return;
	}

	cout << max(0, r - l + 1) << endl;
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