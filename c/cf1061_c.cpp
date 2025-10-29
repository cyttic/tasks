#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int n,k;
		cin >> n >> k;
		vector<int>a(n), mp(n+1), p(n+1);
		/*
		for(auto &i : a){
			cin >> i;
			mp[i]++;
		}
		for(int i = 1;i <= n; ++i)
			p[i] = p[i-1] + mp[i];

		for(auto v : p)
			cout << v << " ";
		cout << endl;
		*/
		for(auto & i: a)
			cin >> i;
		int res = 1;
		for(int i = 1; i <= n; ++i){
			int count_div = 0;
			for(auto &j :a){
				if (j % i != 0 && j/i < 4)
					count_div++;
			}
			if (k-count_div >= 0)
				res = i;
		}
		cout << res << endl;

			
	}
	return 0;
}
