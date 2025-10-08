#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int a;
		cin >> a;
		if(a%3 == 0)
			cout << 0 << endl;
		else if(a%3 == 1)
			cout << 2 << endl;
		else
			cout << 1 << endl;
	}
	return 0;
}
