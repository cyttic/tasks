#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >>t;
	for(int i =0 ; i < t; ++i){
		int n = 0;
		cin >> n;
		int a[n];
		int b[n];
		for(int j = 0; j < n; ++j)
			cin >> a[j];
		for(int j = 0; j < n; ++j)
			cin >> b[j];
		int count = 1;
		while(1 == 1){
			bool isIt = true;
			for(int j = 0;  j < n; ++j){
				if (a[j] > b[j]){
					--a[j];
					isIt = false;
					break;
				}
			}
			for(int j = 0; j < n ; ++j){
				if (a[j] < b[j]){
					++a[j];
					break;
				}
			}
			if(isIt == true)
				break;
			++count;
		}
		cout << count << endl;
	}
	return 0;
}
