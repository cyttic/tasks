#include <bits/stdc++.h>

using namespace std;
int main(){
	
	int t;
	cin >> t;

	while(t--){
		int n ;
		string s;
		cin >> n >> s;
		string cp = s;
		sort(cp.begin(), cp.end());
		int count = 0;
		for(int i = 0; i < s.size(); ++i)
			if (cp[i] != s[i])
				count++;
		cout << count/2 << endl;
	}
	return 0;
}
