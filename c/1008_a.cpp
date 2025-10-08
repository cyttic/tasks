#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; 
	cin >> t;
	while(t-->0){
		int n, k;
		cin >> n >> k;
		int arr[n];
		int summ = 0;
		for(int i = 0; i < n; ++i){
			int a;
			cin >> a;
			summ += a;
		}
		if ((double)summ/n == (double)k)
			cout << "YES" <<endl;
		else
			cout << "NO" << endl;
	}
	return 0; 
}
