#include <bits/stdc++.h>

using namespace std;

int main(){
	int t ;
	cin >> t;
	while(t--){
		int num;
		cin >> num;
		/*
		int prt = 1;
		int n2 = num;
		while(n2){
			n2 /= 10;
			prt *= 10;
		}
		cout << 2*num*(prt-1) << endl;
		*/
		cout << 2*num<<endl;
	}
	return 0;
}
