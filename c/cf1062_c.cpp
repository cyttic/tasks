#include <bits/stdc++.h>


using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int n;
		cin >>n;
		vector<int>vec(n);
		for(int i = 0; i < n; ++i)
			cin >> vec[i];
		sort(vec.begin(),vec.end(), [](int a, int b){
			if ((to_string(a) < to_string(b) ) && (a&1 != b&1))
				return true;
			return false;});
		for(int i = 0; i < n; ++i)
			cout << vec[i] << " ";
		cout << endl;
	}
	return 0;
}	
