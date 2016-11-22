#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	int n=s.length();
	int hash[26]={0};
	for(int i=0;i<n;i++) hash[s[i]-'a']=1;
	int x,count=0;
    cin>>x;
    string str;
    while(x--){
    	cin>>str;
    	bool flag = true;
    	int m=str.length();
    	if(m > n) flag=false;
    	for(int i=0;i<m;i++){
    		if(!(str[i] - 'a'>=0 && str[i] - 'a'<=25)) flag = false;
    		if(hash[str[i]-'a'] != 1 ) flag = false;
    	}
    	if(flag) count++;
    }
    cout<<count<<"\n";
	return 0;
}