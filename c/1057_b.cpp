#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int x,y,z;
		cin >> x >> y >> z;
		int a = x | z;
		int b = x| y;
		int c = y| z;

		if ((a &b) == x && (b &c) == y && (a &c) == z)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
