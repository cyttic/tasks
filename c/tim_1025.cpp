#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; ++i)
		cin >> arr[i];
	sort(arr, arr+n);
	int g =  n/2 + 1;
	int summ = 0;
	for(int i = 0 ; i <g && (i < n); ++i){
		summ +=  arr[i]/2 + 1;
		//cout << "SUMM " << summ << endl;
	}
	cout << summ << endl;
	return 0;
}
