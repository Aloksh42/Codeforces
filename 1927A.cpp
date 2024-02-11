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

		string s;
		cin >> s;

		int a, b;

		for(int i=0; i<n; i++){
			if(s[i] == 'B'){
				a = i;
				break;
			}
		}

		for(int i=n-1; i>=0; i--){
			if(s[i] == 'B'){
				b = i;
				break;
			}
		}
		cout << b - a + 1 << endl;		
	}


	return 0;
}