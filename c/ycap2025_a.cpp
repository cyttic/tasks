#include <bits/stdc++.h>

using namespace std;

int main(){
    long long arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr+3);
    long long r ;
    cin >> r;
    long long mnj = 1;
    long long count = 0;
	while(1 == 1){
		if ((arr[0]*mnj *arr[1]) %arr[2] != 0)
			count++;
		if (count == r){
			count = (arr[0]*mnj *arr[1]);
			break;
		}
		if ((arr[0]*mnj *arr[2]) %arr[1] != 0)
			count++;
		if (count == r){
			count = (arr[0]*mnj *arr[2]);
			break;
		}
		if ((arr[2]*mnj *arr[1]) %arr[1] != 0)
			count++;
		if (count == r){
			count = (arr[2]*mnj *arr[1]);
			break;
		}
		mnj++;
		}
		cout << count << endl;
	
    return 0;
}
