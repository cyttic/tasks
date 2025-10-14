#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	cin >> t;
	while(t-->0){
		int k; 
		cin >> k;
		int Max = -1;
		vector<int>vec(k,0);
		vector<int>vec_r(k+1,0);
		for(int i = 0; i < k; ++i){
			int val;
			cin >> val;
			if(vec_r[val] == 0){
				vec_r[val] = 1;
				vec[i] = val;
			}
			Max = std::max(Max, val);
		}
		Max++;
		queue<int>q;
		for(int i = 1; i <= k; ++i){
			if (vec_r[i] == 0)
				q.push(i);
		}
		for(int i = 0; i < k; ++i)
			if(vec[i] == 0){
				if (q.size() > 0){
					vec[i] = q.front();
					q.pop();
				}else{
					vec[i] = Max++;
				}
			}
		for(int i = 0; i < k; ++i)
			cout << vec[i] << " ";
		cout << endl;
				

			
	}
	return 0;
}
