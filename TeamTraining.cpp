#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin >> n >> m;
	int ans=0,n2,m2,curr;
	for(int i=0;i<=min(n,m/2);i++){
		n2=n-i;
		m2=m-2*i;
		curr = i;
		if(n2>=0 && m2>=0){
			curr+=min(n2/2,m2);
		}
		ans  = max(ans,curr);
	}
	cout << ans << endl;
	return 0;
}