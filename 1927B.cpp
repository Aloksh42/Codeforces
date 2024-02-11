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
		string s = "";
		int c = 0;

		vector<int> v(n);
		map<char, int> m;

		for(auto &x: v){
			cin >> x;
		}
		
		for(int i=0; i<n; i++){
			if(v[i] == 0){
				s += 'a'+c;
				m['a' + c]++;
				c++;
			}
			else {
				for (const auto& pair : m) {
		            if (pair.second == v[i]) {
		            	s += pair.first;
		            	m[pair.first]++;
		            	break;
		            }
		        }
			}
		}

		cout << s << endl;

	}


	return 0;
}