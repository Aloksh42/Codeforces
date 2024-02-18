#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


void solve(){
	int n;
	cin >> n;
	int sum = 0;

	vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
        sum += x;
    }

    if(n == 1){
    	cout << "Yes" << endl;
    	return;
    }

    int target = sum / n;
    int rem = 0;

    for(int i=0; i<n; i++){
    	if(v[i] >= target){
    		rem += abs(v[i] - target);
    	}
    	else{
    		int req = abs(v[i] - target);

    		if(req > rem){
    			cout << "No" << endl;
    			return;
    		}
    		else{
    			v[i] += req;
    			rem -= req;
    		}
    	}
    }

    cout << "Yes" << endl;
    return ;
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