#include <bits/stdc++.h>
#define ll long long
int countNumberofOnes(ll n){
	while(n){
		if(n%2 == 0) count++;
		n /= 2;
	}
	return count;
} 
using namespace std;
int main(int argc, char const *argv[])
{
	int testCases;
	ll m,p;
	cin >> testCases;
	while(testCases--){
		cin >> m >> p;
		ll ans = m | p;
		cout << countNumberofOnes(ans) << endl;
	}
	return 0;
}