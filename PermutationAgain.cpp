#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	long long int n;
	while(t--)
	{
		cin>>n;
		long long int ans;
		if(n == 1) cout << "1" <<"\n";
		else 
		{
			ans = n*(n-1)/2;
			ans--;
			ans+=n/2;
			cout << ans << "\n";
		}
	}
	return 0;
}