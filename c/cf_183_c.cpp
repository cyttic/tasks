#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int k;
		cin >> k;
		string s;
		cin >> s;
		int diff = count(s.begin(), s.end(), 'a') - count(s.begin(), s.end(), 'b');
		map<int, int> lst;
		int pr = 0;
		lst[pr] = -1;
		int ans = k;
		for(int i =0; i < k; ++i){
			pr += s[i] == 'a' ? 1 : -1;
			lst[pr] = i;
			if (lst.count(pr-diff)){
				cout << "COUNT " << lst[pr-diff] << " " << "pr: " << pr << " diff: " << diff << " i : " << i<< endl;
				ans = min(ans, i-lst[pr - diff]);
			}
		}
		cout << (ans == k? -1 : ans) << endl;
	}
	return 0;
}
