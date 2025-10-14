#include <iostream>
#include <cmath>

using namespace std;

int foo(int f, int r, bool &br){
	int count = 0;
	br = false;
	for(int i = f; i <= r; ++i){
		cout << "POINT: " << i << " " << r << " " <<  sqrt(r*r +i*i) << endl;
		if (sqrt(r*r + i*i) < r+1.0)
			count++;
		else{
			br = true;
			break;
		}
	}
	return count;
}

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int r; 
		cin >> r;
		int count = 0;
		bool isG = true;
		for(int i = 0; i <= r; ++i){
		//cout << "POINT: " << i << " " << r << " " <<  sqrt(r*r +i*i) << endl;
		if (sqrt(r*r + i*i) <= r+1.0){
			double d1 = sqrt(r*r + i*i);
			double d2 = double(r) + 1.0;
			if (d1 <= d2){
				cout << "D1: " << d1 << " D2: " << d2 << endl;
				count++;
			}
		}
			else{
				isG = false;
				cout << "ITS BREAK!! " << endl;
				break;
			}
		}
		if (isG)
			count += (count - 1);
		else
			count += count;

		int count2 = count -1;
		int count3 = count-1;
		int count4 = count - 2;
		cout << "COUNT : " << count << endl;
		cout << "COUNT2 : " << count2 << endl;
		cout << "COUNT3 : " << count3 << endl;
		cout << "COUNT4 : " << count4 << endl;

		cout << count + count2 + count3 + count4 << endl;
		
	}
	return 0;
}
