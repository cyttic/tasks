#include <stdio.h>

int gcd(int a, int b){
	int t = b;
	while( b != 0){
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}

int main(){
	int t = 0;
	scanf("%d", &t);
	for(int i =0; i < t; ++i){
		int g = 0;
		scanf("%d",&g);
		int arr[g];
		for(int j = 0; j< g; ++j){
			int temp = 0;
			scanf("%d",&temp);
			arr[j] = temp;
		}
		int min = arr[0];
		int max = arr[0];
		for(int j = 0 ; j < g; ++j){
			if (arr[j] > max)
				max = arr[j];
			if (arr[j] < min)
				min = arr[j];
		}
		printf("%d\n", max - min);

	}
	return 0;
}
