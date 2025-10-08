#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int n,k;
		cin >> n >> k;
		string s;
		cin >> s;

		string vec(n,'+');
		int count0 = 0;
		int count1 = 0;
		int count2 = 0;
		for(int i = 0; i < s.size(); ++i){

			if (s[i] == '0')
				count0++;
			else if(s[i] == '1')
				count1++;
			else
				count2++;

			}
		if (n <= k)
			count0 = n;
		for(int i = 0; i < count0; ++i)
			vec[i] = '-';
		for(int i = count0; i < n && i < count0+count2; ++i)
			vec[i] = '?';
		int pos = count1 + count2;
		if (count0 !=n && n-pos > 0){
			for(int i = n-pos, j = 0; i < n && j < count2; ++j, ++i)
				vec[i] = '?';
			for(int i = count2 +n-pos, j = 0; i < n && j < count1; ++j, ++i)
				vec[i] = '-';
		}
		cout << vec << endl;

	}
	return 0;
}
