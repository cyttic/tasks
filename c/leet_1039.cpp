#include <iostream>
#include <vector>

using  namespace std;

class Solution{
	public:
	int minScoreTriangulation(vector<int>&values){
		int indx = 0;
		int min_prod = 0;
		for(int i = 0 ; i < values.size()-2; ++i){
			int curr = values[0] *values[1]*values[2];
			if(curr < min_prod || min_prod == 0){
				indx = i;
				min_prod = curr;
			}
		}
		if(values.size() >= 4){
			if (values[values.size()-2]*values[values.size()-1]*values[0] < min_prod){
				indx = values.size() - 2;
				min_prod = values[values.size()-2]*values[values.size()-1] *values[0];}
			if (values[values.size()-1]*values[0]*values[1] < min_prod){
				indx = values.size()-1;
			}
		}
		int count = 0;
		int prod = 0;
		while(count < values.size() - 2){
			int m1 = indx;
			indx++;
			if(indx == values.size())
				indx = 0;
			int m2 = indx;
			indx++;
			if(indx == values.size())
				indx = 0;
			int m3 = indx;
			indx--;
			prod += m1*m2*m3;
			count++;
		}
		return prod;
	}	
};
int main(){
	Solution s;
	vector<int>v{1,3,1,4,1,5};
	cout << s.minScoreTriangulation(v) << endl;
	return 0;
}
