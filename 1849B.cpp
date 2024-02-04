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

		// vector<int> res;

		vector<pair<int, int>> a(n);

		for(int i=0; i<n; i++){
			
		  cin>>a[i].first;
          a[i].second=i+1;
          a[i].first%=k;

          if(a[i].first){
          	a[i].first=k-a[i].first;
          }
		}

		sort(a.begin(), a.end());

		for(auto &x: a){
			cout << x.second << " ";
		}

		cout << endl;

	}


	return 0;
}