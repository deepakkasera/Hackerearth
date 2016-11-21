#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	string s;
	while(t--){
       cin>>s;
       int m=s.length();
       bool flag=true;
       for(int i=0;i < m/2;i++){
       	if(s[i] != s[m-1-i]) flag=false;
       }
       if(!flag) cout<<"NO\n";
       if(flag){
       	if(m%2 == 0) cout<<"YES EVEN\n";
       	else cout<<"YES ODD\n";
       }
	}
	return 0;
}