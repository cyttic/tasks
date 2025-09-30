#include <iostream>

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t-->0){
		int x,y;
		cin >> x >> y;
		if(x <y)
			cout << 2 << endl;
		else if (x-y < 2 || y == 1)
			cout << -1 << endl;
		else
			cout << 3 << endl;
	}
	return 0;
}
