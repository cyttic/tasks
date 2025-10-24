#include <iostream>

using namespace std;

bool isPolin(const string &s){
	bool ok = true;
	//cout << "STRING: " << s << endl;
	for(int i = 0; i < s.size()/2; ++i)
		if (s[i] != s[s.size()-i-1]){
			ok = false;
			break;
		}
	return ok;
}

int main(){
	int t ;
	cin >> t;
	while(t-->0){
		int n;
		cin >> n;
		string s;
		cin >> s;
		bool isFound = false;
		for(int i = 0; i < n && !isFound; ++i){
			for(int j = i; j <n && !isFound; ++j){
				bool isGrow = true;
				for(int x = i; x < j-1; ++x){
					if(s[x] > s[x+1]){
							isGrow = false;
							break;
							}
				}
				if(isGrow){
					string s2 = string(s.begin(), s.begin()+i) + string(s.begin() +j, s.end());
					if(isPolin(s2)){
						isFound = true;
						cout << j-i << endl;
						for(int y = i; y < j; ++y)
							cout << 1+y << " ";
						cout << endl;
						break;
					}
				}
			}
		}
		if (isFound == false)
			cout << -1 << endl;
	}

	return 0;
}
