#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int testCases;
	cin >> testCases;
	while(testCases--){
		int n,m,k,gems=0;
		cin >> n >> m >> k;
		std::vector<int> x(n);
		std::vector<int> c(m);
		std::vector<int> z(m);
		std::vector<std::vector<int> > M(n,std::vector<int>(m));
		for(int i=0;i<n;i++) cin >> x[i];
		for(int i=0;i<m;i++) cin >> c[i];
		for(int i=0;i<m;i++) cin >> z[i];
		std::vector<__int128_t> v(n);
	    __int128_t o=1;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(__gcd(x[i],c[j]) != 1) v[i] |= (o<<j);
			}
		}
		int limit = 1<<n;
		int ans=0;
		for(int mask=0;mask<limit;mask++){
			if(__builtin_popcount(mask) > k) 
				continue;
			__int128_t boxes = 0;
			for(int i=0;i<n;i++){
				if(mask & (o<<i)){
					boxes |= v[i];
				}
			}
			int val=0;
			for(int i=0;i<m;i++){
				if(boxes & (o << i))
					val += z[i];
			}
			ans = max(ans,val);	
		}	
		cout << ans << endl;
	}
	return 0;
}