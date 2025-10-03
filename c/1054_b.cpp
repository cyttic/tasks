#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int k;
		cin >> k;
		int arr[k];
		for(int i = 0; i < k ; i++)
			cin >> arr[i];
		std::sort(arr, arr +k);
		int min_dif = 0;
		for(int i = 0; i < k-1; i += 2){
			min_dif = std::max(min_dif, std::abs(arr[i+1] - arr[i]));
		}
		cout << min_dif << endl;
	}
}
			
