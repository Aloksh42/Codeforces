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

		int arr[n];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}

		if(is_sorted(arr, arr+n) || k > 1){
			cout << "Yes" << endl;
		}
		else
			cout << "No" << endl;
	}

	return 0;
}