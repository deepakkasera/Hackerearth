#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		long int k;
		int x;
		cin>>a>>b>>c>>k;
		if( c-pow(b,2)/(4*a) > k )   x=0;
        else{
        	float x1 = ((-1)*b + sqrt(pow(b,2) - 4*a*(c-k)))/(2*a);
        	float x2 = ((-1)*b - sqrt(pow(b,2) - 4*a*(c-k)))/(2*a);
        	if(x1*x2 < 0 )  x=ceil(max(x1,x2));
        	else if(x1>0 && x2>0)  x=min(x1,x2);
        	 else x=0;
        }
        cout<<x;
	}
	return 0;
}