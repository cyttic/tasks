#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int n ;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; ++i)
			cin >> arr[i];
		int summ1 = 0;
		int Max = -1;
		int Min = 1e9 + 1;
		int indx_max = 0;
		int indx_min = 0;
		for(int i = 0; i < n ; ++i){
			if (i % 2 == 1){
				summ1 -= arr[i];
				if (arr[i] <= Min){
					indx_min = i;
					Min = arr[i];
				}	
			}else{
				summ1 += arr[i];
				if(arr[i] > Max){
					indx_max = i;
					Max = arr[i];
				}
			}
			
		}
		int summ2 = 0;
		if ((arr[indx_max] - arr[indx_min] + std::abs(indx_max - indx_min)) > (n%2 == 1? n-1 : n-2)){
			cout << "HERE" << endl;
			int val = arr[indx_max];
			arr[indx_max] = arr[indx_min];
			arr[indx_min] = val;
			summ2 += (std::abs(indx_max -  indx_min) + 1);
		}
		else
			summ2 += (n%2 == 1? n-1 : n-2);
		for(int i = 0; i < n; ++i)
			i%2 == 1? summ2 -= arr[i] : summ2 += arr[i];
	       cout << std::max(summ1,summ2) << endl;	       
	}
	return 0;
}
