#include <iostream>
#include <algorithm>

using namespace std;


int main(){
	int t;
	cin >> t;
	while(t-->0){
		int n,k;
		cin >> n >> k;
		int arr[n] = {0};
		int eq_k = 0;
		for(int i = 0; i < n; ++i){
			int v = 0;
			cin >> v;
			if(v < k) 
				arr[v]++;
			if (v == k)
				eq_k++;
		}
		int holes = 0;
		for(int i = 0; i < k; ++i)
			if (arr[i] == 0)
				holes++;
		cout << std::max(holes, eq_k) << endl;
	}
}
