#include <bits/stdc++.h>

using namespace std;

int main(){
	int size ;
	cin >> size;
	vector<int>vec(size);
	for(int i = 0; i < size; ++i)
		cin >> vec[i];
	sort(vec.begin(),vec.end());
	int summ = vec[size-1];
	int limit = 1 << size;
	for(int mask = 0; mask < limit; ++mask){
		long long s = 0;
		for(int i = 0; i < size; ++i)
			if (mask & (1 << i)) {
				cout << mask << " " << i << endl;
			}
	}
	cout << abs(summ) << endl;
	return 0;
}
