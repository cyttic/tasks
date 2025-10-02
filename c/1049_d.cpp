#include <bits/stdc++.h>

using namespace std;

int main(){
	using ll = long long int;
	int t ;
	cin >> t;
	while(t-->0){
		
		vector<pair<ll,ll>>vec;
		int size;
		cin >> size;
		for(int i = 0; i < size; ++i){
			pair<ll,ll> p;
			cin >> p.first >> p.second;
			vec.push_back(p);
		}
		sort(vec.begin(), vec.end(), [](auto & p1, auto &p2){
				if (p1.second > p2.second)
					return true;
				else if (p1.second == p2.second && p1.first > p2.first)
					return true;
				return false;
				});
		ll summ = 0;
		int indx = 0;
		cout << "PAIRS: " << endl;
		for(auto & p : vec)
			cout << p.first << " " << p.second << endl;
		while(1 == 1){
			int pos = vec.size() - indx - indx;
			if (pos >1){
				summ += vec[indx].second - vec[vec.size()-1-indx].first;
				summ += vec[indx].second - vec[indx].first;
				summ += vec[vec.size()-indx-1].second - vec[vec.size()-indx -1].first;
			}else if(pos == 1)
				summ += vec[indx].second - vec[indx].first;
			else
				break;
			indx++;
		}
		cout << summ << endl;
	}
	return 0;
}
