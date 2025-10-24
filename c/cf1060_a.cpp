#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int a,b;
		cin >> a >> b;
		string s;
		cin >> s;
		int counter = 0;
		int pos = 0;
		int dist = -1001;
		for(int i = 0; i < s.size(); ++i){
			if (s[i] == '1' && (i - dist >= b)){
				counter++;
			}
			if (s[i] == '1')
				dist = i;
		}
		cout << counter << endl;
	}
	return 0;
}
		
