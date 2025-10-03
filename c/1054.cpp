#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int n ;
		cin >> n;
		int summ = 0;
		int count_minus = 0;
		for(int i = 0; i < n; ++i){
			int k;
			cin >> k;
			if (k == 0)
				summ++;
			if (k == -1)
				count_minus++;
		}
		if (count_minus%2)
			summ += 2;
		cout << summ << endl;
	}
}	
