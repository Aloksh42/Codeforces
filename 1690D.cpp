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
		
		int n, k;
		cin >> n >> k;

		string s;
		cin >> s;

		int res = 0;
		int count = 0;
		
		for(int i=0; i<k; i++){
			if(s[i] == 'B')
				count++;
		}

		res = count;

		for(int i=k; i<n; i++){
			count += s[i] == 'B';
			count -= s[i-k] == 'B';
			res = max(res, count);
		}

		cout << k - res << endl;

	}

	return 0;
}