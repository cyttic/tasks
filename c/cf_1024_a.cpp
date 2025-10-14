#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int n,m,p,q;
		cin >> n >> m >> p >> q;
		if (n %p == 0 && (q*n/p != m ))
			cout << "no" << endl;
		else
			cout << "yes" << endl;

	}
	return 0;
}
