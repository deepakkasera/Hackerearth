	#include <bits/stdc++.h>
	using namespace std;
	int main(int argc, char const *argv[])
	{
		int t;
		cin>>t;
		std::vector<int> v1(t);
		std::vector<int> v2(t);
		for(int i=0;i<t;i++)  cin>>v1[i];
		long long q;
	    cin>>q;
	    v2[0]=v1[0];
	    int temp=v1[0];
	    for(int i=1;i<t;i++) 
	    {
	    	temp+=v1[i];
	    	v2[i]+=temp;
	    }	
	    while(q--){
	       long long x;
	       cin>>x;
	       long int ans;
	       bool flag=false;
	       long left=0;
	       long right=t-1;
	       while(left <= right){
	       	long middle = (left+right)/2;
            if(v2[middle] >= x ) {ans=middle; right=middle-1;flag=true;}
            else if(v2[middle] < x ) left=middle+1;
	       }	     
	       if(flag) cout<<ans+1<<endl;
	       else cout <<"-1"<<endl;
  	     }
		return 0;
	}