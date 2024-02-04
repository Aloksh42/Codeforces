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
		
		int n;
		cin >> n;

		int a[n];
		int b[n];

		for(int i=0; i<n; i++){
			cin >> a[i];
		}


		for(int i=0; i<n; i++){
			cin >> b[i];
		}

		int ans = 0;
		int cnt1[2*n+1] = {0};
		int cnt2[2*n+1] = {0};

		for(int i=0; i<n; i++){
			int j = i;
			while(j<n && a[j]==a[i]){
				j++;
			}

			cnt1[a[i]] = max(cnt1[a[i]], j-i);
			i = --j;
		}


		for(int i=0; i<n; i++){
			int j = i;
			while(j<n && b[j]==b[i]){
				j++;
			}

			cnt2[b[i]] = max(cnt2[b[i]], j-i);
			i = --j;
		}

		for(int i=1; i <= 2*n; i++){
			ans = max(ans, cnt1[i] + cnt2[i]);
		}

		cout << ans << endl;

	}


	return 0;
}