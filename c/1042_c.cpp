#include <iostream>
#include <unordered_map>
#include <cmath>
#include <ctime>

using namespace std;

int main(){
	srand(time(0));
	unsigned int RD = rand() % (1U << 31);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 0;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		int b[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		for(int i = 0; i < n ; ++i)
			cin >> b[i];	

		unordered_map<int,int>cnt;
		for(int i = 0; i < n; ++i)
		{
			int r = a[i] %k;
			cnt[min(r,k-r) ^RD]++;
		}
		for(int i = 0; i < n; ++i){
			int r = b[i] %k;
			cnt[min(r,k-r) ^RD]--;
		}
		bool result = true;
		for(const auto& [key,value] : cnt){
			if (value != 0)
				result = false;
		}
		cout << (result ? "YES" : "NO") << endl;
	}
	return 0;
}
