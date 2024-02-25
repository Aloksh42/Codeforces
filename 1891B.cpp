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
		
		int n, q;
		cin >> n >> q;

		vector<int> a(n);

		for(auto &v: a){
			cin >> v;
		}

		int y = 30;

		while(q--){
			int x;
			cin >> x;
			if(x > y){
				continue;
			}
			for(int i=0; i<n; i++){
				if(a[i] % (1 << x) == 0){
					a[i]+=(1<<(x-1));
				}
			}
			y=x-1;
		}

		for(auto &v: a){
			cout << v << " ";
		}

		cout << endl;
	}


	return 0;
}