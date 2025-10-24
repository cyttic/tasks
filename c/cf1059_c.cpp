#include <iostream>
#include <vector>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		using ll = long long;
		ll a,b;
		cin >> a >> b;
		ll result = a ^ b;
		if (result > a){
			ll val = result - result/2;
			if ( ((a ^ val)^(result-val)) != b)
				cout << -1 << endl;
			else{
						
				while(a != b){
				cout << 2 << endl << val << " " << result-val << endl;
		}
		else
			cout << 1 << endl << result << endl;
	}
	return 0;
}
