#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; ++i)
			cin >> arr[i];
		int Max = arr[0];
		for(int i = 0; i < n; ++i)
			Max = std::max(Max, arr[i]);
		cout << Max << endl;
	}
	return 0;
}
