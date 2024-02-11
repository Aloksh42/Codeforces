#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


void solve(){
	int a, b;
	cin >> a >> b;

	if(a%2 != 0 && b%2 != 0){
		cout << "No" << endl;
		return;
	}
	
	if((a%2 != 0 && b/2 == a) || (b%2 != 0 && a/2 == b) ){
		cout << "No" << endl;
		return;
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