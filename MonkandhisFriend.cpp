#include <bits/stdc++.h>
#define ll long long
using namespace std;
//Complexity is O(logn)
int countNumberofOnes(ll n){
	int count=0;
	while(n){
		if(n%2 == 1) count++;
		n /= 2;
	}
	return count;
} 
//Complexity is O(number of 1's)
int countNumberofOnes2(ll n){
	int count=0;
	while(n){
		n = n&(n-1);
		count++;
	}
	return count;
}
int main(int argc, char const *argv[])
{
	int testCases;
	ll m,p;
	cin >> testCases;
	while(testCases--){
		cin >> m >> p;
		ll ans = m^p;
		cout << __builtin_popcount(ans) << endl;
	}
	return 0;
}