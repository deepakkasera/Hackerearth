#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
    string s[n],ans;
    for(int i=0;i<n;i++)  cin>>s[i];
    for(int i=0;i<m;i++)
    {
    	int a[26]={0};
    	int maximum=0;
    	for(int j=0;j<n;j++){
    		a[s[j][i] - 'a']++;
    		maximum = max(a[s[j][i] - 'a'],maximum);
    	}
    	for(int j=0;j<26;j++){
    		if(a[j] == maximum){
    			ans+=('a'+j);
    			break;
    		}
    	}
    }
    cout << ans <<"\n";
	return 0;
}