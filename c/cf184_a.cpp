#include <iostream>
#include <vector>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int n;
		int a;
		cin >> n >> a;
		vector<int>vec(n);
		int count_pos = 0;
		int count_neg = 0;
		for(int i = 0; i < n; ++i){
			int v;
			cin >> v;
			vec[i] = v - a;
			if (vec[i] > 0)
				count_pos++;
			else if (vec[i] < 0)
				count_neg++;
		}
		if (count_pos > count_neg )
			cout << a + 1 << endl;
		else
			cout << a - 1 << endl;

	}
	return 0;
}
