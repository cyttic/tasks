#include <iostream>

using namespace std;

int main(){
	int t ;
	cin >> t;
	while(t-->0){
		int n,a,b;
		cin >>n>>a>>b;
		if (n % 2 != b %2)
			cout <<"NO" <<endl;
		else{
			if ( b>=a || (a % 2 == n %2 ))
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}

	}
	return 0;
}
