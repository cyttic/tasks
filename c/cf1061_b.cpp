#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int n, q;
		cin >> n >> q;
		string s;
		cin >> s;
		int arr[q];
		for(int i = 0; i < q; ++i)
			cin >> arr[i];
		int count_b = 0;
		for(int i = 0; i < n; ++i)
			if (s[i] == 'B')
				count_b++;
		for(int i = 0; i < q; ++i){
			int count = 0;
			
			int pos = 0;
			int var = arr[i];
			if (count_b == 0){
				cout << var << endl;
				continue;
			}

			while(var > 0){
				if(s[pos] == 'A')
					var--;
				else
					var /= 2;
				pos++;
				if (pos > n-1)
					pos = 0;
				count++;
			}
			cout << count << endl;
		}
	}
	return 0;
}
