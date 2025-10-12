#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int k;
		cin >> k;
		vector<int>v;
		int val = 0;
		for(int i = 0; i < k; ++i){
			int r = 0;
			cin >> r;
			if (i==0)
				val = abs(r);
			if (r > 0)
				v.push_back(r);
			else
				v.push_back(-1*r);
		}
		int count = 0;
		for(int i =0; i < v.size(); ++i)
			if (v[i] > val)
			       count++;
		//cout << "COUNTT IS: " << count << endl;
		int  need = 1+ k / 2;
		if (need < k - count)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;	
	}
	return 0;
}
