#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int n;
		cin >> n;
		vector<int>vec(n);
		for(int i = 0; i < n; ++i)
			cin >> vec[i];
		set<int> uniq(vec.begin(),vec.end());
		cout  << uniq.size() << endl;


	}
	return 0;
}
