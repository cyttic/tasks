#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int n;
		cin >> n;
		using ll = long long;
		vector<ll>vec(n);
		for(int i = 0; i < n; ++i)
			cin >> vec[i];
		sort(vec.begin(),vec.end());
		ll res = -1;
		for(auto &val : vec){
			bool isFound = false;
			for(ll i = 2 ; i < val+2; ++i){
				if (gcd(i,val) == 1){
					res = i;
					isFound = true;
					break;
				}
			}
			if (isFound)
				break;
		}
		cout << res << endl;
	}
	return 0;
}
