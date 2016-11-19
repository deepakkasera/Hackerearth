#include <bits/stdc++.h>
using namespace std;
int a,b,c,d;
long long k;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
      cin>>a>>b>>c>>d>>k;
      long long int left=0;
      long long int right=pow(10,18);
      long long middle;
      while(left < right)
      {
      	long long middle=(left+right)/2;
      	if(a*pow(middle,3) + b*pow(middle,2) + c*middle + d > k  )  right = middle-1;
      	else left = middle+1;
      }
      middle = left - 5;
      middle = middle < 0 ? 0 : middle;
      while(a*pow(middle,3) + b*pow(middle,2) + c*middle + d <= k) middle++;
      /*
      middle=left;
      if(middle<0)  middle=0;
      if(a*pow(middle,3) + b*pow(middle,2) + c*middle + d > k ) middle--;
      else if(a*pow(middle+1,3) + b*pow(middle+1,2) + c*(middle+1) + d <= k) middle++;
      if(middle<0)  middle=0;
      */
      if(!middle) middle++;
      cout<<middle-1<<endl;
	}
	return 0;
}