#include <bits/stdc++.h>
#define ll long long 
using namespace std;
ll modularExp(ll a,ll b,ll m)
{
	ll result=1;
	while(b>0)
	{
		if(b%2 == 1) result = (result*a)%m;
		a = (a*a)%m;
		b/=2;
	}
	return result;
}
int extendedEuclid(int c, int m) {
    int d,x,y;
    if(m == 0) {
        d = c;
        x = 1;
        y = 0;
    }
    else 
    {
        extendedEuclid(m, c%m);
        int temp = x;
        x = y;
        y = temp - (c/m)*y;
    }
    return x;
}
int main(int argc, char const *argv[])
{
	long long int  a,b,c,m;
	cin>>a>>b>>c>>m;
	ll ans1 = modularExp(a,b,m);
	int ans2 = extendedEuclid(c,m);
	ans1 = (ans1*ans2)%m;
	cout << ans1;
	return 0;
}