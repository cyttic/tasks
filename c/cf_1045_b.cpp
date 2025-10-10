#include <iostream>

using namespace std;

int main(){
	using ll = long long int;
	int t;
	cin >> t;
	while(t-->0){
		int n,k;
		cin >> n >> k;
		ll arr[n];
		for(int i = 0; i < n ; ++i){
			ll a = 0;
			cin >> a;
			arr[i] = a + (a % (k+1)) *k;
		}

		for(int i = 0; i < n; ++i){
			cout << arr[i]<< " ";
		}
		cout << endl;
	}
	return 0;
}
