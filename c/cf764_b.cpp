#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int a,b,c;
		cin >> a >> b >> c;
		int diff = 0;
		if (a >c )
			diff = c + ( a - c)/2;
		else
			diff = a + (c - a)/2;
		if (diff != 0 && diff % b == 0){
			cout << "YES1 " << diff <<  endl;
			continue;
		}
		if (a > b)
			diff = b - ( a - b);
		else
			diff = b +  ( b - a);
		if (diff != 0 && diff %c == 0){
			cout << "YES2" << endl;
			continue;
		}
		if (b > c)
			diff = b + (b -c);
		else
			diff = b - (c - b);
		if (diff != 0 && diff % a == 0){
			cout << "YES3" << endl;
			continue;
		}
		cout << "NO" << endl;
	}
	return 0;
}


