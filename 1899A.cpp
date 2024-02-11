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

		if(n % 3 != 0){
			cout << "First" << endl;
		}
		else
			cout << "Second" << endl;
	}

	return 0;
}