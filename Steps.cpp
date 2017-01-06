#include <bits/stdc++.h>
using namespace std ;
int ways(int n,int k){
	if(n==0){
		return 1;
	}
	if(n<0) return 0 ;
	int ans =0;
	for(int i=1;i<=k;i++){
		ans += ways(n-i,k) ;
	}
	return ans ;
}
int bottomUp(int n,int k) {
	int dp[1000] ;
	dp[0] =1;
	for(int i=1;i<=n;i++){
		dp[i] = 0;
		for(int jump = 1 ; jump<= k ;jump++){
			if(i-jump >= 0){
				dp[i] += dp[i-jump] ;
			}
		}
	}
	return dp[n] ;
}
int main(int argc, char const *argv[])
{
	cout << ways(4,3) << endl ;
	cout <<bottomUp(4,3)  << endl ;
	return 0;
}