#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		string s;
		cin >> s;
		if (s.size() == 1){
			cout << 1 << endl;
			continue;
		}
		bool isF = false;
		for(int i = 0; i < s.size()-1; ++i){
			if (s[i] == '*')
				if (s[i+1] == '*' || s[i+1] == '<'){
					cout << -1 << endl;
					isF = true;
					break;
				}
			if (s[i] == '>')
				if (s[i+1] == '*' || s[i+1] == '<'){
					cout << -1 << endl;
					isF = true;
					break;
				}
			}
		if (isF)
			continue;
		int c1 =0;
		int c2 = 0;
		for(int i = 0;i  < s.size(); ++i){
			if (s[i] == '<' || s[i] == '*')
				c1++;
			else
				break;
		}
		for(int i = s.size()-1; i >=0; i--)
			if (s[i] == '>' || s[i] == '*')
				c2++;
			else
				break;
		cout << std::max(c1,c2) << endl;
	}
	return 0;
}


