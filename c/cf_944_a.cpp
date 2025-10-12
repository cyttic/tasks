#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int k; 
		cin >> k;
		int r2 = k+1;
		double mg = sqrt(2.0)*r2;
		int ans = 0;
		for(int i = -1*round(mg); i <= round(mg); ++i)
			ans++;
		cout << ans*4 << endl;
	}
	return 0;
}
