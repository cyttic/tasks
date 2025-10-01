#include <iostream>

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t-->0){
		int k ;
		cin >> k;
		int arr[k*2];
		for(int i = k, j = 0; i > 0;--i,j++){
			arr[j] =i;
		       	if (i == k)
				arr[j+i] = i;
			else
				arr[j+i+i] = i;
		}
		for(int i = 0; i < k*2; ++i)
			cout << arr[i] << " ";
		cout << endl;
	}	
	return 0;
}
