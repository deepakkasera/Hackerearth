#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s,t;
	cin>>s>>t;
	int n = s.length();
	int m = t.length();
	int x=0,y=0;
	while(x<n && y<m){
        if(s[x] == t[y]) x++;
        y++;
	}
	cout<<x<<"\n";
	return 0;
}