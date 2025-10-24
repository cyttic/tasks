#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int a;
		cin >> a;
		int summ = 0;
		if (a >4){
			int count = a-3;
			summ += count/2;
			a = 3;
		}
		summ++;
		cout << summ << endl;
			
	}
	return 0;
}
