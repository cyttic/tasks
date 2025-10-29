#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int n;
		cin >> n;
		string s1,s2;
		cin >> s1 >> s2;
		bool isGood = true;
		for(auto &l: s1){
			if (count(s1.begin(),s1.end(), l) != count(s2.begin(), s2.end(),l)){
				isGood = false;
				break;
			}
		}
		if (isGood)
			cout << "YES" <<endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
