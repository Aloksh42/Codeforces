#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"


int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;

	while(t--){

		int n,l=0,r=0;

		bool flag=true;
		cin>>n;

		vector<int>a(n);
		map<int,int>m;


		for(int i=0;i<n;i++){
			cin>>a[i];
			m[a[i]]++;
		}

		for(const auto& pair : m){
		    if(pair.second == 1){
		        cout << -1 << endl;
		        flag = false;
		        break;
		    }
		}

		if(flag){
			int l=1;
			for(int i=1;i<n;i++){
				if(a[i]==a[i-1])
				{
					r=i+1;
					cout<<r<<" ";
				}
				else
				{
					cout<<l<<" ";
					l=r+1;
				}
			}
			cout<<l<<endl;
		}
	}
	return 0;
}