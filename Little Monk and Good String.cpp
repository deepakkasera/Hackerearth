#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int n=s.length();
	int ans=0,count=0,x=0;
	for(int i=0;i<n;i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' || s[i]=='u')  
			count++ , ans = max(count,ans);
        else count=0;
	}
	cout << ans << "\n";
	return 0;
}