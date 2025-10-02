#include <bits/stdc++.h>

using namespace std;

int first[100];

#define INF 1000000

void solution(const vector<int>&coins, int n){
	int value[n];
	value[0] = 0;
	for(int x = 1; x <= n; x++){
		value[x] = INF;
		for(auto &c : coins){
			if(x-c >= 0 && value[x-c] +1 < value[x]){
				value[x] = value[x-c] + 1;
				first[x] = c;
			}
		}
	}
}

int main(){
	int n = 6;
	vector<int>coins{1,3,4};
	solution(coins, n);

	while(n > 0){
		cout << first[n] << endl;
		n -= first[n];
	}
	return 0;
}
