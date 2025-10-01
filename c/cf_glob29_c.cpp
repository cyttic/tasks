#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int a ;
		cin >> a;
		string s;
		cin >> s;
		bool isClosed = s[0] == '1';
		int counter = 0;
		bool isOk = true;
		for(int i = 0; i < s.size(); ++i){
			if(s[i] == '0')
				counter++;
			if(i == 0)
				continue;
			if(s[i] == '0' && s[i] == s[i-1])
				isClosed = false;
			else if(s[i] == '1' && s[i] == s[i-1]){
				if (isClosed && counter % 2 == 1)
					isOk = false;
				isClosed = true;
				counter = 0;
			}
		}
		if(isClosed && counter %2 == 1 && s[s.size()-1] == '1')
			isOk = false;
		if (isOk)
			cout << "YES" << endl;
		else
			cout << "No" << endl;
	}

			
	return 0;
}
