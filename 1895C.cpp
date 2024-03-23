#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long


void solve() {
	
	int n;
	cin >> n;

	vector<string>v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}

	int res = n;

    vector<map<int, int>> mp(6);
    vector<pair<int, string>> vs;

    for(auto e: v){
        vs.push_back({e.size(), e});
    }

    sort(vs.begin(), vs.end());
    v.clear();

    for(auto pair: vs){
        v.push_back(pair.second);
    }

    for(auto s:v){
        int total = 0;

        for(auto d: s){
            total += (d - '0');
        }

        for(int len = s.size()+2-s.size()%2; len<=2*s.size(); len+=2){
            int a = 0;
            int b = 0;


            for(int i=0; i<s.size()-len/2; i++){
                a += s[i]-'0';
                b += s[s.size()-i-1]-'0';
            }

            res += mp[len-s.size()][total-2*a];
            res += mp[len-s.size()][total-2*b];
        }

        mp[s.size()][total]++;
    }

    cout << res << endl;
    return;

}


int32_t main() {

	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	int t = 1;

	while(t--){
		solve();		
	}

	return 0;
}