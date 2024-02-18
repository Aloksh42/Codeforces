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
		
		int n, x;
		cin >> n >> x;

		vector<int> v(n);

		for(auto &i : v){
			cin >> i;
		}

		int min = v[0];
		int max = v[0];
		int res = 0;

		for(int i=1; i<n; i++){
			if(v[i] > max)
				max = v[i];
			if(v[i] < min)
				min = v[i];
			if(max - min > 2*x){
				res++;
				max = min = v[i];
			}
		}

		cout << res << endl;		
	}


	return 0;
}