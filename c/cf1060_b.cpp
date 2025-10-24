#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t-->0){
		int n;
		cin >> n;
		vector<int>vec(n);
		for(int i = 0; i < n ; ++i)
			cin >> vec[i];
		
		int Max = vec[0];
		int counter = 0;
		for(int i = 0; i < n-1 ; ++i){
			Max = max(vec[i], Max);
			if((i & 1)== 0)
				vec[i] = Max;
			else{
				if (vec[i] <= vec[i+1]){
					counter += (vec[i+1] - vec[i] + 1);
					vec[i+1] = vec[i] - 1;
				}
			}
				
		}

		for(int i = 0; i< vec.size(); ++i)
			cout<< vec[i] << " " ;
		cout << endl;
		cout << counter << endl;


	}
	return 0;
}

