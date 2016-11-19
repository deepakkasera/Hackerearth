#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int a,b,c;
	long long k;
	while(t--)
	{
		cin>>a>>b>>c>>k;
		if(c >= k)   cout<<"0\n";
		else {
			double p  = (-b + sqrt(pow(b,2) - 4*a*(c-k)))/(2*a);
			double q = (-b - sqrt(pow(b,2) - 4*a*(c-k)))/(2*a);
            if(p>0 && q>0)  cout<<ceil(min(p,q))<<endl;
            if(p>0 && q<0)  cout<<ceil(p)<<endl;
            if(p<0 && q>0)  cout<<ceil(q)<<endl;
            if(p<0 && q<0)  cout<<"0\n";
		}
	}
	return 0;
}