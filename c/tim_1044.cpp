#include <bits/stdc++.h>

using namespace std;

int getSumm(int a){
	if (a == 0)
		return 0;
	return getSumm(a/10) + a%10;
}

int main(){
	int k;
	cin >> k;
	int M = pow(10, k/2) - 1;
	int summ = 0;
	int res[M] = {-1};
	for(int i = 0; i  < M; ++i){
		for(int j = i; j < M ; ++j){
		}

	return 0;
}

