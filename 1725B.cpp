#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

		
	int n, d;
	cin >> n >> d;

	vector<int> v(n);

	for(auto &x: v){
		cin >> x;
	}

	sort(v.begin(), v.end(), greater<int>());

	int count = 1;
	int res = 0;

	for(int i=0; i<n; i++){
		int x = v[i];

		while(x <= d){
			count++;
			x += v[i];
		}

		if(count > n){
			break;
		}

		res += 1;
		count++;
	}

	cout << res << endl;

	return 0;
}