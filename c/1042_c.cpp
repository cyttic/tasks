#include <iostream>
#include <cmath>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 0;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		int b[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		for(int i = 0; i < n ; ++i)
			cin >> b[i];	
		bool isSuccess = true;
		for(int i = 0; i < n; ++i){
			bool isFound = false;
			for(int j = 0 ; j < n; ++j){
				//cout << "HERE 1 " << a[i] << " " << b[j]<< endl;
				if (b[j] < 0)
					continue;
				if (abs(a[i] - b[j]) %k == 0){
					isFound = true;
					b[j] = -1;
					break;
				}
				int val = a[i]-k;
				//cout << "VAL HERE = " << val << endl;
				if (abs(val - b[j]) %k == 0){
					isFound = true;
					b[j] = -1;
					break;
				}
				val -= k*(val/k);
				//while(val > 0)
				//	val -= k;
				val = val*-1;
				//cout << "THIS IS VAL = " << val << endl;
				if (abs(val - b[j]) %k == 0){
					isFound = true;
					b[j] = -1;
					break;
				}

			}
			if (!isFound){
				isSuccess = false;
				break;
			}
		}
		if (isSuccess)
			cout << "YES" << endl;
		else
			cout << "NO" <<endl;
	}
	return 0;
}
