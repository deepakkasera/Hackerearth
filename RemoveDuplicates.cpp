#include <bits/stdc++.h>
#define NO 256
using namespace std;
string removeDuplicates(string s){
	int m=s.length();
	int hash[NO] = {0};
	int i=0;
	string str="";
	while( i < m ){
		char temp=s[i];
		if(hash[temp] == 0)  {
			hash[temp] = 1;
			str+=s[i];;
		}
		i++;
	}
	return str;
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	string s;
	cin>>s;
	int m=s.length();       
	cout << removeDuplicates(s) <<"\n" ;	

	return 0;
}